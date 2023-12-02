#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int arr[51][51];
vector<pair<int, int>> chicken;
vector<pair<int, int>> house;
int n, m;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            cin >> arr[i][j];
            if(arr[i][j]==1){
                house.push_back({i, j});
            }else if(arr[i][j]==2){
                chicken.push_back({i, j});
            }
        }
    }
    vector<int> v;
    for (int i = 0; i < chicken.size();i++){
        if(i<m){
            v.push_back(1);
        }
        else{
            v.push_back(0);
        }
    }
    sort(v.begin(), v.end());
    int ans = -1;
    do{
        int sum = 0;
        for (int i = 0; i < house.size();i++){
            int dist = -1;
            int hy = house[i].first;
            int hx = house[i].second;
            for (int j = 0; j < chicken.size();j++){
                if(v[j]==0) continue;
                int cy = chicken[j].first;
                int cx = chicken[j].second;
                int temp = abs(hy - cy) + abs(hx - cx);
                if(dist==-1 || dist > temp){
                    dist = temp;
                }
            }
            sum += dist;
        }
        if(ans == -1 || ans >sum){
            ans = sum;
        }
    } while (next_permutation(v.begin(), v.end()));
    cout << ans << '\n';
}