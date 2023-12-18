#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int t, n, g, dir, gear[1001][8];
string s;
vector<pair<int, int>> v, v2;
int check(int a, int b){
    if (gear[a][2] == gear[b][6])
        return 0;
    else
        return 1;
}
void revolution(int gear_num, int dir){
    if(dir==1){
        int temp = gear[gear_num][7];
        for (int i = 7; i > 0;i--){
            gear[gear_num][i] = gear[gear_num][i - 1];
        }
        gear[gear_num][0] = temp;
    }
    else if (dir == -1){
        int temp = gear[gear_num][0];
        for (int i = 0; i < 7;i++){
            gear[gear_num][i] = gear[gear_num][i + 1];
        }
        gear[gear_num][7] = temp;
    }
}

int main()
{
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> s;
        for (int j = 0; j < 8;j++){
            gear[i][j] = s[j] - '0';
        }
    }
    cin >> n;
    for (int i = 0; i<n;i++){
        cin >> g >> dir;
        v.push_back({ g - 1,dir });
    }
    for (int i = 0; i < n; i++){
        int gear_num = v[i].first;
        int gear_dir = v[i].second;
        v2.push_back({ gear_num, gear_dir });
        int left = gear_num - 1;
        int right = gear_num + 1;
        while(left>=0){
            if(check(left, left+1)==0)
                break;
            else{
                v2.push_back({ left, -gear_dir });
                gear_dir = -gear_dir;
                left--;
            }
        }
        gear_dir = v[i].second;
        while(right<=t-1){
            if(check(right-1, right)==0)
                break;
            else{
                v2.push_back({ right, -gear_dir });
                gear_dir = -gear_dir;
                right++;
            }
        }
        for (int j = 0; j < v2.size();j++){
            revolution(v2[j].first, v2[j].second);
        }
        v2.clear();
    }
    int ans = 0;
    for (int i = 0; i < t;i++){
        if(gear[i][0]==1) ans++;
    }
    cout << ans;
    return 0;
}