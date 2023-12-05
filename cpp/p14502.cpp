#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstring>
using namespace std;

int visited[10][10];

const int dy[4] = {-1,0,1,0};
const int dx[4] = {0,1,0,-1};
int n, m;
int a[10][10];
int ret = 0;
vector<pair<int, int>> virus;
vector<pair<int, int>> wall;

void dfs(int y, int x){
    visited[y][x] = 1;
    for (int i = 0; i < 4;i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny < 0 || ny >= n || nx < 0 || nx >= m)
            continue;
        if(a[ny][nx] == 1 || a[ny][nx] == 2 || visited[ny][nx])
            continue;
        dfs(ny, nx);
    }
    return;
}

int solve(){
    memset(visited, 0, sizeof(visited));
    for(auto v:virus){
        dfs(v.first, v.second);
    }
    int ret = 0;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            if(a[i][j] == 0 && !visited[i][j])
                ret++;
        }
    } 
    return ret;

}

int main(){
    
    cin >> n >> m;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            cin >> a[i][j];
            if(a[i][j] == 2)
                virus.push_back(make_pair(i, j));
            if(a[i][j] == 0)
                wall.push_back(make_pair(i, j));
        }
    }
    for (int i = 0; i < wall.size();i++){
        for (int j = 0; j < i;j++){
            for(int k=0;k<j;k++){
                a[wall[i].first][wall[i].second] = 1;
                a[wall[j].first][wall[j].second] = 1;
                a[wall[k].first][wall[k].second] = 1;
                ret=max(ret,solve());
                a[wall[i].first][wall[i].second] = 0;
                a[wall[j].first][wall[j].second] = 0;
                a[wall[k].first][wall[k].second] = 0;
            }
        }
    }
    cout << ret << '\n';
    return 0;
}