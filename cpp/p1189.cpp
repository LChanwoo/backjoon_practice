#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

const int dy[4]={-1,0,1,0}, dx[4]={0,1,0,-1};
int r, c, k ,ans = 0;
int A[6][6], visited[6][6];
string s;

void dfs(int y, int x, int cnt){
    if(cnt==k){
        if(y==0&&x==c-1){
            ans++;
        }
        return;
    }
    for (int i = 0; i < 4;i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny<0||ny>=r||nx<0||nx>=c || A[ny][nx]==1)
            continue;
        if(visited[ny][nx])
            continue;
        visited[ny][nx] = 1;
        dfs(ny, nx, cnt + 1);
        visited[ny][nx] = 0;
    }
}

int main(){
    cin >> r >> c >> k;
    for (int i = 0; i < r;i++){
        cin >> s;
        for (int j = 0; j < c;j++){
            if(s[j]=='.')
                A[i][j] = 0;
            else
                A[i][j] = 1;
        }
    }

    visited[r - 1][0] = 1;
    dfs(r - 1, 0, 1);
    cout << ans;
    return 0;
}