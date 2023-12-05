#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

const int dy[3] = { 0,1,1 };
const int dx[3] = { 1,1,0 };

int n;
int a[17][17],visited[17][17];
int ans = 0;
int state = 0;
bool diagonalCheck(int y, int x){
    for (int i = 0; i < 3;i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(a[ny][nx]==1)return false;
    }
    return true;
}

void dfs(int y, int x, int state){
    if(y==n-1 && x==n-1){
        ans++;
        return;
    }
    for (int i = 0; i < 3;i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny>=n||nx>=n||a[ny][nx]==1||visited[ny][nx])continue;
        if(state == 0 && i==2)continue;
        if(state == 2 && i==0)continue;
        if(i==1 && !diagonalCheck(y, x))continue;
        visited[ny][nx] = 1;
        dfs(ny, nx, i);
        visited[ny][nx] = 0;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            cin >> a[i][j];
        }
    }
    visited[0][0] = 1;
    visited[0][1] = 1;
    dfs(0, 1, 0);
    cout << ans << '\n';
    return 0;
}