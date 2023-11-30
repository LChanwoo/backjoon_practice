#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<utility>
#include<string>
using namespace std;

int visited[101][101];
int dp[101][101];
int n, m;
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

void bfs(int y, int x){
    queue<pair<int,int>> q;
    visited[y][x] = 1;
    q.push(make_pair(y, x));
    while(q.size()){
        int y = q.front().first;
        int x = q.front().second;
        q.pop();
        for (int i = 0; i<4;i++){
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(ny<0 || ny>=n || nx<0 || nx>=m)
                continue;
            if(visited[ny][nx])
                continue;
            if(dp[ny][nx]==0)
                continue;
            visited[ny][nx] = visited[y][x] + 1;
            q.push(make_pair(ny, nx));
        }
    }
}

int main(){
    cin >> n >> m;
    for (int i = 0; i<n;i++){
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            dp[i][j] = s[j] - '0';
        }
    }

    bfs(0, 0);

    cout << visited[n - 1][m - 1];
}