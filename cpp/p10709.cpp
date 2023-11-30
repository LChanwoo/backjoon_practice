#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int H, W;
string s;
vector<int> v[101];
int main(){
    cin >> H >> W;

    for (int i = 0; i < H; i++)
    {
        cin >> s;
        int cnt = 0;
        bool flag = false;
        for (int j = 0; j < W; j++)
        {
            if(s[j]=='c')
            {
                flag = true;
                cnt = 0;
                v[i].push_back(cnt);
            }
            else if(s[j]=='.' && !flag)
            {
                v[i].push_back(-1);
            }
            else
            {
                cnt++;
                v[i].push_back(cnt);
            }
        }
    }
    for (int i = 0; i < H;i++)
    {
        for (int j = 0; j < W;j++)
        {
            cout << v[i][j] << ' ';
        }
        cout << '\n';
    }
}