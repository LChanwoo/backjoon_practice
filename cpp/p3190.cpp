#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

int n, k, x, y, L, a[101][101];
int dir = 0;
char c;
const int dx[4]={1,0,-1,0};
const int dy[4]={0,1,0,-1};
vector<pair<int, char>> v;
queue<pair<int, int>> q;

void change_dir(char c){
    if(c == 'L') dir = (dir + 3) % 4;
    else dir = (dir + 1) % 4;
}


int main(){
    cin >> n >> k;
    for (int i = 0; i < k;i++){
        cin >> x >> y;
        a[x-1][y-1] = 1;
    }
    cin >> L;
    for (int i = 0; i < L;i++){
        cin >> x >> c;
        v.push_back({x, c});
    }
    int x = 0, y = 0;
    a[y][x] = 2;
    int cnt=0;
    q.push({y, x});

    while (true)
    {
        if(cnt++==v[0].first){
            change_dir(v[0].second);
            v.erase(v.begin());
        }
        int ny = y + dy[dir];
        int nx = x + dx[dir];
        if(nx<0||nx>=n||ny<0||ny>=n||a[ny][nx]==2){
            break;
        }
        q.push({ny, nx});
        if(a[ny][nx]==1){
            a[ny][nx] = 2;
        }
        else if(a[ny][nx]==0){
            a[ny][nx] = 2;
            int ty = q.front().first;
            int tx = q.front().second;
            q.pop();
            a[ty][tx] = 0;
        }
        x=nx, y=ny;
    }

    cout << cnt;    
    return 0;
}