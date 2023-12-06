#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstring>
#include<utility>
using namespace std;

const int dy[4]={-1,0,1,0};
const int dx[4]={0,1,0,-1};
int a[51][51];
int visited[51][51];
int p_visited[11];
int n, m, ans = 987654321;
int vacant = 0;
queue<pair<int, int>> q;
vector<pair<int, int>> v;
vector<pair<int, int>> virus;
bool check(){
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            if(a[i][j]) continue;
            if(visited[i][j]==0) return false;
        }
    }
    return true;
}
void bfs(){
    for(int i = 0; i < virus.size();i++){
        int y = virus[i].first;
        int x = virus[i].second;
        q.push({y, x});
        visited[y][x] = 1;
    }
    int cnt = 0, time = 0;
    while (q.size())
    {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();
        for (int i = 0; i < 4;i++){
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(ny<0 || ny>=n || nx<0 || nx>=n)
                continue;
            if(visited[ny][nx]) continue;
            if(a[ny][nx]==1) continue;
            if(a[ny][nx]==0){
                cnt++;
                time = visited[y][x];
            }
            visited[ny][nx] = visited[y][x] + 1;
            q.push({ny, nx});
        }
    }
    if(cnt == vacant) ans = min(ans, time);
}
void permutation(int cnt, int start){
    if(cnt == m){
        memset(visited, 0, sizeof(visited));
        bfs();
        return;
    }
    for(int i = start; i < v.size(); i++){
        if(p_visited[i]) continue;
        p_visited[i] = 1;
        virus.push_back(v[i]);
        permutation(cnt+1, i);
        virus.pop_back();
        p_visited[i]=0;
    }
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            cin >> a[i][j];
            if(a[i][j]==2){
                v.push_back({i, j});
                a[i][j] = 3;
            }else if(a[i][j]==0){
                vacant++;
            }
        }
    }
    permutation(0, 0);
    if(ans==987654321) cout << -1;
    else cout << ans;
    return 0;
}