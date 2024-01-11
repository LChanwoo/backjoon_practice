#include<iostream>
#include<algorithm>
using namespace std;

int n, m, a[51][51], ans;
int visited[51][51];
char c;
const int dy[2]={0,1};
const int dx[2]={1,0};

void dfs(int y, int x, int dir){
    if(visited[y][x] || a[y][x]!= dir) return;
    visited[y][x] = 1;
    int ny = y + dy[dir];
    int nx = x + dx[dir];
    if(ny<0 || ny>=n || nx<0 || nx>=m) return;
    dfs(ny, nx, dir);
}

int main(){
    cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> c;
            if(c == '-') a[i][j] = 0;
            else a[i][j] = 1;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!visited[i][j]){
                ans++;
                if(a[i][j]==0) dfs(i, j, 0);
                else dfs(i, j, 1);
            }
        }
    }
    cout << ans;
    return 0;
}

