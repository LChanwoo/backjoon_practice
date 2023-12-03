#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

const int MAX = 10;
const int dy[4]={ -1,0,1,0 };
const int dx[4]={ 0,1,0,-1 };

int n ,ans =2000000000;
int a[MAX][MAX], visited[MAX][MAX];

int setFlower(int y, int x){
    int sum = a[y][x];
    visited[y][x] = 1;
    for(int i=0;i<4;i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        visited[ny][nx] = 1;
        sum += a[ny][nx];
    }
    return sum;
}
bool checkFlower(int y, int x){
    if(visited[y][x]) return false;
    for(int i=0;i<4;i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny < 0 || ny>=n || nx<0 || nx>=n ||visited[ny][nx])
            return false;
    }
    return true;
}

void eraseFlower(int y, int x){
    visited[y][x] = 0;
    for(int i=0;i<4;i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        visited[ny][nx] = 0;
    }
}

void dfs(int cnt, int sum){
    if(cnt == 3){
        ans = min(ans, sum);
        return;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(checkFlower(i, j)){
                int tmp = setFlower(i, j);
                dfs(cnt + 1, sum + tmp);
                eraseFlower(i, j);
            }
        }
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    dfs(0, 0);
    cout << ans;
    return 0;
}