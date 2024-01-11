#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

const int dy[4]= {-1,0,1,0};
const int dx[4] = {0,1,0,-1};
int n, m;
int a[1001][1001];
int visited[1001][1001];
pair<int, int> start_point;

void bfs(int y, int x){
    queue<pair<int, int>> q;
    q.push({y, x});
    while(!q.empty()){
        int y = q.front().first;
        int x = q.front().second;
        q.pop();
        for (int dir = 0; dir < 4;dir++){
            int ny = y + dy[dir];
            int nx = x + dx[dir];
            if(ny<0 || ny>=n || nx<0 || nx>=m)continue;
            if(visited[ny][nx])continue;
            if(a[ny][nx]==0)continue;
            visited[ny][nx] = visited[y][x] + 1;
            q.push({ny, nx});
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
            if(a[i][j]==2){
                start_point = {i, j};
            }
        }
    }
    bfs(start_point.first, start_point.second);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==0 || a[i][j]==2){
                cout << 0 << ' ';
            }
            else
            {
                if(visited[i][j]==0){
                    cout << -1 << ' ';
                }else{
                    cout << visited[i][j] << ' ';
                }
            }
        }
        cout << '\n';
    }
}