#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<cstring>
using namespace std;

int n, m;
int visited[51][51];
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};
char a[51][51];
vector<pair<int, int>> L;
string s;
queue<pair<int, int>> q;
int bfs(int y, int x){
    q.push({y, x});
    visited[y][x] = 1;
    while(!q.empty()){
        int y = q.front().first;
        int x = q.front().second;
        q.pop();
        for(int i = 0; i < 4; i++){
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(ny<0||ny>=n||nx<0||nx>=m)
                continue;
            if(visited[ny][nx])
                continue;
            if(a[ny][nx] == 'W')
                continue;
            visited[ny][nx] = visited[y][x] + 1;
            q.push({ny, nx});
        }
    }
    int maxvalue = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            maxvalue = max(maxvalue, visited[i][j]);
        }
    }
    return maxvalue - 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    for (int i = 0; i < n;i++){
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            a[i][j] = s[j];
            if(a[i][j] == 'L')
                L.push_back({ i,j });
        }
    }
    int ans = 0;
    for (int i = 0;i<L.size();i++){
        memset(visited, 0, sizeof(visited));
        int y = L[i].first;
        int x = L[i].second;
        int temp = bfs(y, x);
        if(ans < temp)
            ans = temp;
    }
    cout << ans << '\n';
}