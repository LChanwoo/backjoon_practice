#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;

int n, m, ans=987654321;
int a[1001][1001], cp[1001][1001];
int visited[1001][1001][2];
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};
vector<pair<int,int>> wall;
queue<pair<int,int>> q;


void bfs(int y,int x){
    q.push({y, x});
    visited[y][x][0] = 1;
    while(!q.empty()){
        int y = q.front().first;
        int x = q.front().second;
        q.pop();
        if(y==n-1 && x==m-1){
            return;
        }
        for(int i=0;i<4;i++){
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(ny<0 || ny>=n || nx<0 || nx>=m)
                continue;
            if(visited[ny][nx][0])
                continue;
            if(a[ny][nx]==0){
                visited[ny][nx][0] = visited[y][x][0] + 1;
                q.push({ny, nx});
            }
            if(a[ny][nx]==1){
                visited[ny][nx][1] = visited[y][x][0] + 1;
                q.push({ny, nx});
            }
            
        }
    }

}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    if(n==1 && m==1){
        cout << 1;
        return 0;
    }   
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        for(int j=0;j<m;j++){
            a[i][j] = s[j] - '0';
        }
    }
    bfs(0, 0);
    if(visited[n-1][m-1][0]==0 && visited[n-1][m-1][1]==0){
        cout << -1;
        return 0;
    }
    if(visited[n-1][m-1][0]!=0){
        cout << visited[n-1][m-1][0];
        return 0;
    }
    if(visited[n-1][m-1][1]!=0){
        cout << visited[n-1][m-1][1];
        return 0;
    }
    
    return 0;

}