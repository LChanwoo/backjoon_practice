// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<cstring>
// #include<string>
// using namespace std;

// int r, c;
// int visited[21][21];
// int alpha[26];
// char board[21][21];
// const int dy[4]= {-1,0,1,0};
// const int dx[4]= {0,1,0,-1};
// int ans = 0;
// string s;

// void dfs(int y, int x, int cnt){
//     ans = max(ans, cnt);
//     for (int i = 0; i < 4; i++)
//     {
//         int ny = y + dy[i];
//         int nx = x + dx[i];

//         if(ny < 0 || ny >= r || nx < 0 || nx >= c)
//             continue;
//         if(visited[ny][nx])
//             continue;
//         if(alpha[board[ny][nx] - 'A'])
//             continue;
//         visited[ny][nx] = 1;
//         alpha[board[ny][nx] - 'A'] = 1;
//         dfs(ny, nx, cnt + 1);
//         visited[ny][nx] = 0;
//         alpha[board[ny][nx] - 'A'] = 0;
//     }
// }

// int main(){
//     cin >> r >> c;
//     for(int i=0;i<r;i++){
//         cin >> s;
//         for (int j = 0; j < c; j++)
//         {
//             board[i][j] = s[j];
//         }
//     }
//     visited[0][0] = 1;
//     alpha[board[0][0] - 'A'] = 1;
//     dfs(0, 0, 1);

//     cout << ans;
//     return 0;
// }

// second try

#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;

int r, c;
int visited[21][21];
int alpha[26];

string s;
char board[21][21];
const int dy[4]= {-1,0,1,0};
const int dx[4]= {0,1,0,-1};
int ans = 0;

void dfs(int y, int x, int cnt){
    ans = max(ans, cnt);
    for (int i = 0; i < 4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny < 0 || ny >= r || nx < 0 || nx >= c || visited[ny][nx] || alpha[board[ny][nx] - 'A'])
            continue;
        visited[ny][nx] = 1;
        alpha[board[ny][nx] - 'A'] = 1;
        dfs(ny, nx, cnt + 1);
        visited[ny][nx] = 0;
        alpha[board[ny][nx] - 'A'] = 0;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> r >> c;
    for(int i=0;i<r;i++){
        cin >> s;
        for (int j = 0; j < c; j++) board[i][j] = s[j];
    }
    visited[0][0] = 1;
    alpha[board[0][0] - 'A'] = 1;
    dfs(0, 0, 1);
    cout << ans;
    return 0;
}