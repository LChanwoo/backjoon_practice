#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

int n, m;
int a[1001][1001];
int visited[1001][1001];
queue<pair<int, int>> q;

const int dy[4] = {-1,0,1,0};
const int dx[4] = {0,1,0,-1};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> m >> n;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            cin >> a[i][j];
            if(a[i][j]==1){
                q.push(make_pair(i, j));
                visited[i][j] = 1;
            }
        }
    }
    while(!q.empty()){
        int y = q.front().first;
        int x = q.front().second;
        q.pop();
        for (int i = 0; i < 4;i++){
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(ny>=0&&ny<n&&nx>=0&&nx<m){
                if(a[ny][nx]==0&&visited[ny][nx]==0){
                    visited[ny][nx] = visited[y][x] + 1;
                    q.push(make_pair(ny, nx));
                }
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            if(a[i][j]==0&&visited[i][j]==0){
                cout << -1 << '\n';
                return 0;
            }
            ans = max(ans, visited[i][j]);
        }
    }
    cout << ans - 1 << '\n';
    return 0;
}