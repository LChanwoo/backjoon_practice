#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<string>
#include<cstring>
using namespace std;

const int dy[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
const int dx[8] = {1, 2, 2, 1, -1, -2, -2, -1};
const int n = 4;
int cnt;
int visited[n][n];
int start_map[n][n];
int cp_start_map[n][n];
int end_map[n][n];
vector<pair<int, int>> start_position;
string s;
int minvalue = 1000000000;

void bfs(int y, int x){
    queue<pair<int, int>> q;
    for(auto i : start_position){
        q.push({i.first, i.second});
        // visited[i.first][i.second] = 1;
    }
    while(!q.empty()){
        int y = q.front().first;
        int x = q.front().second;
        q.pop();
        if(visited[y][x] == end_map[y][x]){
            continue;
        }
        cnt++;
        for (int i = 0; i < 8; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(ny < 0 || ny > n || nx < 0 || nx > n)
                continue;
            // if(visited[ny][nx])
            //     continue;
            if(cp_start_map[ny][nx] == 1)
                continue;
            // visited[ny][nx] = visited[y][x] + 1;
            cp_start_map[y][x] = 0;
            cp_start_map[ny][nx] = 1;
            q.push({ny, nx});
        }
    }
    return;
}

int main(){
    for(int i = 0; i < n; i++){
        cin >> s;
        for (int j = 0; j < n; j++)
        {
            start_map[i][j] = s[j] - '0';
            if(start_map[i][j] == 1){
                start_position.push_back({i, j});
            }
        }
    }
    for(int i = 0; i < n; i++){
        cin >> s;
        for (int j = 1; j < n;j++){
            end_map[i][j] = s[j] - '0';
        }
    }

    do{
        cnt = 0;
        memset(visited, 0, sizeof(visited));
        memcpy(cp_start_map, start_map, sizeof(start_map));
        bfs(0, 0);
        // for(int i = 0; i < n; i++){
        //     for (int j = 0; j < n;j++){
        //         cout << visited[i][j] << " ";
        //     }
        //     cout << '\n';
        // }
        // cout << '\n';
        minvalue = min(minvalue, cnt);
    }while(next_permutation(start_position.begin(), start_position.end()));


    bfs(0, 0);

    cout << minvalue << '\n';

}