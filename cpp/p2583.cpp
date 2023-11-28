#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int arr[101][101];
bool visited[101][101];
const int dy[] = {-1, 0, 1, 0};
const int dx[] = {0, 1, 0, -1};
int n, m, k,cnt;

void dfs(int y, int x){
    visited[y][x] = true;
    cnt++;
    for (int i = 0; i < 4;i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny<0 || ny>=n || nx<0 || nx>=m)
            continue;
        if(visited[ny][nx])
            continue;
        if(arr[ny][nx]!=0)
            continue;
        dfs(ny, nx);
    }
}

int main(){
    cin >> n >> m >> k;
    for(int i = 0; i < k;i++){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        for (int j = a; j < c;j++){
            for (int l = b; l < d;l++){
                arr[l][j] = 1;
            }
        }
    }
    
    vector<int> v;
    for (int i = 0; i < n;i++){
        for (int j = 0; j<m;j++){
            if(arr[i][j]==0 && !visited[i][j]){
                cnt = 0;
                dfs(i, j);
                v.push_back(cnt);
            }
        }
    }
    sort(v.begin(), v.end());
    cout << v.size() << '\n';
    for(int i : v)
        cout << i << " ";
}