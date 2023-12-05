#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;

const int dy[4] = {-1,0,1,0};
const int dx[4] = {0,1,0,-1};

int n, l, r ,sum,cnt;
int a[51][51];
int visited[51][51];
vector<pair<int, int>> v;

void dfs(int y, int x){
    for (int i = 0; i < 4;i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny<0||ny>=n||nx<0||nx>=n||visited[ny][nx])
            continue;
        int diff = abs(a[y][x] - a[ny][nx]);
        if(diff<l||diff>r)
            continue;
        v.push_back({ny, nx});
        visited[ny][nx] = 1;
        sum += a[ny][nx];
        dfs(ny, nx);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> l >> r;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            cin >> a[i][j];
        }
    }
    while(true){
        bool flag = false;
        memset(visited, 0, sizeof(visited));
        for(int i=0;i<n;i++){
            for (int j = 0; j < n;j++){
                if(!visited[i][j]){
                    v.clear();
                    v.push_back({i, j});
                    visited[i][j] = 1;
                    sum = a[i][j];
                    dfs(i, j);
                    if(v.size()==1) continue;
                    int avg = sum / v.size();
                    for (auto k : v){
                        a[k.first][k.second] = avg;
                        flag = true;
                    }
                }
            }
        }
        if(!flag) break;
        cnt++;
    }
    cout << cnt;
}