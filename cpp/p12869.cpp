#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<queue>
using namespace std;

int n, scv[3];
int visited[61][61][61];
int dx[6] = {9, 9, 3, 3, 1, 1};
int dy[6] = {3, 1, 9, 1, 9, 3};
int dz[6] = {1, 3, 1, 9, 3, 9};
queue<pair<pair<int, int>, int>> q;

void bfs(){
    q.push({ {scv[0], scv[1]}, scv[2] });
    visited[scv[0]][scv[1]][scv[2]] = 1;
    while(!q.empty()){
        int x = q.front().first.first;
        int y = q.front().first.second;
        int z = q.front().second;
        q.pop();
        if(x == 0 && y == 0 && z == 0){
            cout << visited[x][y][z] - 1 << '\n';
            return;
        }
        for (int i = 0; i < 6;i++){
            int nx = x - dx[i];
            int ny = y - dy[i];
            int nz = z - dz[i];
            if(nx < 0)
                nx = 0;
            if(ny < 0)
                ny = 0;
            if(nz < 0)
                nz = 0;
            if(visited[nx][ny][nz])
                continue;
            visited[nx][ny][nz] = visited[x][y][z] + 1;
            q.push({ {nx, ny}, nz });
        }
    }
}

int main(){
    cin >> n;
    for (int i = 0; i < n;i++){
        cin >> scv[i];
    }
    bfs();
    return 0;
}