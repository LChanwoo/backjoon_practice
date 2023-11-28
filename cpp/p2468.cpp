#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<utility>

using namespace std;
int n;
int a[101][101];

const int dy[4] = {-1,0,1,0};
const int dx[4] = {0,1,0,-1};

bool visited[101][101];

void dfs(int y,int x, int h){
    if(a[y][x]<=h || visited[y][x])
        return;
    visited[y][x] = true;
    for(int i = 0; i < 4;i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny<0 || ny>=n || nx<0 || nx>=n || visited[ny][nx])
            continue;
        if(a[ny][nx]<=h)
            continue;
        dfs(ny, nx, h);
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;

    for(int i = 0; i < n;i++){
        for(int j = 0; j < n;j++){
            cin >> a[i][j];
        }
    }
    int h = 100;
    int max_area = 1;
    while (h > 0)
    {
        memset(visited, 0, sizeof(visited));
        int cnt = 0;
        for(int i = 0; i < n;i++){
            for(int j = 0; j < n;j++){
                if(a[i][j]>h && !visited[i][j]){
                    cnt++;
                    dfs(i, j, h);
                }
            }
        }
        max_area = max(max_area, cnt);
        h--;
    }
    cout << max_area;
}