#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstring>
#include<string>
using namespace std;

int r, c;
char map[1501][1501];
int visited[1501][1501];
int visited_swan[1501][1501];
pair<int, int> swan[2];

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, -1, 0, 1};

queue<pair<int, int>> ice_q, swan_q;
queue<pair<int, int>> ice_temp_q, swan_temp_q;
string s;

void print(){
    cout << '\n';
    for (int i = 0; i < r;i++){
        for (int j = 0; j < c;j++){
            cout << visited[i][j];
        }
        cout << '\n';
    }

}

void melt(){
    while(!ice_q.empty()){
        int y = ice_q.front().first;
        int x = ice_q.front().second;
        ice_q.pop();
        for (int i = 0; i < 4;i++){
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(ny<0||ny>=r||nx<0||nx>=c||visited[ny][nx]) continue;
            if(map[ny][nx]=='X'){
                map[ny][nx] = '.';
                ice_temp_q.push({ny, nx});
                visited[ny][nx] = 1;
            }
        }
    }
}

bool swan_move(){
    while(swan_q.size()){
        int y = swan_q.front().first;
        int x = swan_q.front().second;
        swan_q.pop();
        for (int i = 0; i < 4;i++){
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(ny<0||ny>=r||nx<0||nx>=c||visited_swan[ny][nx]) continue;
            visited_swan[ny][nx] = 1;
            if(map[ny][nx]=='.'){
                swan_q.push({ny, nx});
            }
            else if(map[ny][nx]=='X'){
                swan_temp_q.push({ny, nx});
            }
            else if(map[ny][nx]=='L'){
                return true;
            }
        }
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> r >> c;
    int idx = 0;
    for (int i = 0; i < r;i++){
        cin >> s;
        for (int j = 0; j < c; j++)
        {
            map[i][j]=s[j];
            if(map[i][j]=='L'){
                swan[idx++] = {i, j};
            }
            if(map[i][j]=='.' || map[i][j]=='L'){
                ice_q.push({i, j});
                visited[i][j] = 1;
            }
        }
    }
    int ans = 0;
    swan_q.push(swan[1]);
    visited_swan[swan[1].first][swan[1].second] = 1;
    while(true){
        if(swan_move()) break;
        melt();
        ice_q = ice_temp_q;
        swan_q = swan_temp_q;
        ice_temp_q = queue<pair<int, int>>();
        swan_temp_q = queue<pair<int, int>>();
        ans++;
    }
    cout << ans;
    return 0;
}