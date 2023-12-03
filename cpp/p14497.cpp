#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<cstring>
using namespace std;

int n, m, turn=0;
int zx, zy, vx, vy;
int visited[301][301];
int a[301][301];

const int dy[4]={-1, 0, 1, 0};
const int dx[4]={0, 1, 0, -1};

string s;
queue<pair<int, int>> q;
void bfs(int zx, int zy){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    
    q.push({zx, zy});
    visited[zy][zx] = 1;
    while(!q.empty()){
        int y = q.front().second;
        int x = q.front().first;
        if(a[y][x] == 10){
            break;
        }
        q.pop();
        for (int i = 0; i < 4;i++){
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(ny < 0 || ny >= n || nx < 0 || nx >= m)
                continue;
            if(visited[ny][nx] || a[ny][nx]==8 || a[ny][nx] == 9)
                continue;
            if(a[ny][nx] == 1){
                a[ny][nx] = 9;
                visited[ny][nx] = visited[y][x] + 1;
            }else if(a[ny][nx] == 2){
                a[ny][nx] = 10;
                break;
            }
            else if (a[ny][nx] == 0)
            {
                visited[ny][nx] = visited[y][x] + 1;
                a[ny][nx] = 8;
                q.push({nx, ny});
            }
        }
    }
    for (int i = 0; i < n;i++)
    {   
        for (int j = 0; j < m; j++)
        {
            if(a[i][j] == 8 || a[i][j] == 9)
                a[i][j] = 0;
        }
    }
}

int main(){
    cin >> n >> m;
    cin >> zx >> zy >> vx >> vy;
    for (int i = 0; i<n;i++){
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            a[i][j] = s[j] - '0';
        }
    }
    a[zx-1][zy-1] = 3;
    a[vx-1][vy-1] = 2;
    while (a[vx-1][vy-1] != 10)
    {   
        memset(visited, 0, sizeof(visited));
        bfs(zy-1, zx-1);
        turn++;
    }
    cout << turn<<'\n';
    return 0;
}
