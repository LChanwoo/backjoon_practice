#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<utility>
using namespace std;

int w, h;
int a[51][51];
int dy[8] ={ -1, -1, 0, 1, 1, 1, 0, -1 };
int dx[8] ={ 0, 1, 1, 1, 0, -1, -1, -1 };

bool visited[51][51];
void dfs(int y, int x){
    if(visited[y][x])
        return;
    visited[y][x] = 1;
    
    for (int i = 0; i < 8;i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny<0 || ny>=h || nx<0 || nx>=w)
            continue;
        if(visited[ny][nx])
            continue;
        if(a[ny][nx]==0)
            continue;
        dfs(ny, nx);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> v;
    while(1){
        memset(a, 0, sizeof(a));
        memset(visited, 0, sizeof(visited));
        cin >> w >> h;
        if(w==0 && h==0)
            break;
        for (int i = 0; i < h;i++){
            for (int j = 0; j < w;j++){
                cin >> a[i][j];
            }
        }
        int cnt = 0;
        for (int i = 0; i < h;i++){
            for (int j = 0; j < w;j++){
                if(a[i][j]==1 && !visited[i][j]){
                    dfs(i, j);
                    cnt++;
                }
            }
        }
        v.push_back(cnt);
    }
    for(auto cnt:v){
        cout << cnt << '\n';
    }
    return 0;
}