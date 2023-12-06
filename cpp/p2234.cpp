#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstring>
#include<cmath>
#include<utility>
using namespace std;

const int dy[4] = {0, -1, 0, 1};
const int dx[4] = {-1, 0, 1, 0};
int n, m , cnt, r_max =-1, wallbreak=-1 ;
int room[101][101];
int visited[101][101];
int comps[3000];
queue<pair<int, int>> q;

int bfs(int y, int x,int cnt){
    int ret = 0;
    q.push({y, x});
    visited[y][x] = cnt;
    while(q.size()){
        ret++;
        int y = q.front().first;
        int x = q.front().second;
        q.pop();
        for (int i = 0; i<4;i++){
            if(room[y][x] & (1<<i)) continue;
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(ny<0 || ny>=m || nx<0 || nx>=n || visited[ny][nx]) continue;
            visited[ny][nx] = cnt;
            q.push({ny, nx});
        }
    }
    return ret;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> room[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(visited[i][j])continue;
            cnt++;
            comps[cnt] = bfs(i, j,cnt);
            r_max = max(comps[cnt], r_max);   
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(i + 1 < m){
                int a = visited[i + 1][j]; 
                int b = visited[i][j]; 
                if(a != b){ 
                    wallbreak = max(wallbreak, comps[a] + comps[b]); 
                }
            }
            if(j + 1 < n){
                int a = visited[i][j + 1]; 
                int b = visited[i][j]; 
                if(a != b){ 
                    wallbreak = max(wallbreak, comps[a] + comps[b]); 
                }
            } 
        } 
    }

    cout << cnt << '\n';
    cout << r_max << '\n';
    cout << wallbreak;
}
