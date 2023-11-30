#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<cstring>
using namespace std;

int n, m , cnt, time_spend = 0, last_cheeses =0;
int cheese[101][101];   
int visited[101][101];
const int dy[4]={-1,0,1,0};
const int dx[4]={0,1,0,-1};


void bfs(int y, int x){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    visited[y][x] = 1;
    queue<pair<int, int>> q;
    q.push(make_pair(y, x));
    while(q.size()){
        int y = q.front().first;
        int x = q.front().second;
        q.pop();
        for(int i = 0; i < 4; i++){
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(ny < 0 || ny >= n || nx < 0 || nx >= m)
                continue;
            if(cheese[ny][nx]){
                cheese[ny][nx] = 2;
                continue;
            }
            if(visited[ny][nx]){
                continue;
            }
            visited[ny][nx] = visited[ny][nx]+1;
            q.push(make_pair(ny, nx));
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0 ; j < m; j++){
            cin >> cheese[i][j];
        }
    }
    while(1){
        time_spend++;
        memset(visited, 0, sizeof(visited));
        bfs(0, 0);
        cnt = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0 ; j < m; j++){
                if(cheese[i][j] == 2){
                    cheese[i][j] = 0;
                    cnt++;
                }
                if(cheese[i][j] == 1){
                    
                }
            }
        }
        if(cnt == 0){
            cout << time_spend-1 << '\n' << last_cheeses;
            return 0;
        }
        last_cheeses = cnt;
    }

    cout<<'\n';
    for(int i = 0; i < n; i++){
        for(int j = 0 ; j < m; j++){
            cout << cheese[i][j] << " ";
        }
        cout << '\n';
    }
}