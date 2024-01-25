#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

const int dy[4] = { 0, -1, 0, 1 };
const int dx[4] = { -1, 0, 1, 0 };

int n;
int a[21][21];
int ans = 0;
int dist[21][21] = { 0 };

pair<int,int> shark;

void bfs(int y,int x){
    
    queue<pair<int, int>> q;
    q.push({ y,x });
    dist[y][x] = 1;
    while(!q.empty()){
        tie(y, x) = q.front();
        q.pop();
        for (int k = 0; k < 4;k++){
            int ny = y + dy[k];
            int nx = x + dx[k];
            if(ny>=0 && ny<n && nx>=0 && nx<n){
                if(dist[ny][nx]==0 && a[ny][nx]<=a[shark.first][shark.second]){
                    dist[ny][nx] = dist[y][x] + 1;
                    q.push({ ny,nx });
                }
            }
        }
    }
    int minDist = 401;
    int miny = -1, minx = -1;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            if(a[i][j]<a[shark.first][shark.second] && dist[i][j]!=0){
                if(minDist>dist[i][j]){
                    minDist = dist[i][j];
                    miny = i;
                    minx = j;
                }
                else if(minDist==dist[i][j]){
                    if(miny>i){
                        miny = i;
                        minx = j;
                    }
                    else if(miny==i){
                        if(minx>j){
                            minx = j;
                        }
                    }
                }
            }
        }
    }
    if(miny!=-1 && minx!=-1){
        ans += dist[miny][minx] - 1;
        a[miny][minx] = 0;
        shark = { miny,minx };
        bfs(miny, minx);
    }
    return;
    

}

int main(){
    cin >> n;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            cin >> a[i][j];
            if(a[i][j]==9){
                shark = { i,j };
                a[i][j] = 0;
            }
        }
    }
    bfs(shark.first, shark.second);
    
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            cout << dist[i][j] << ' ';
        }
        cout << '\n';
    }
}