#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};
int main()
{
    int T , M, N, K;
    cin >> T;

    while(T--){
        int a[51][51]={0};
        cin >> M >> N >> K;
        for (int i = 0; i < K;i++){
            int x, y;
            cin >> x >> y;
            a[y][x] = 1;
        }
        int visited[51][51]={0};
        int cnt = 0;
        for (int i = 0; i < N;i++){
            for (int j = 0; j < M;j++){
                if(a[i][j]==0 || visited[i][j])
                    continue;
                cnt++;
                visited[i][j] = 1;
                vector<pair<int, int>> v;
                v.push_back(make_pair(i, j));
                while(!v.empty()){
                    int y = v.back().first;
                    int x = v.back().second;
                    v.pop_back();
                    for (int k = 0; k < 4;k++){
                        int ny = y + dy[k];
                        int nx = x + dx[k];
                        if(ny<0 || ny>=N || nx<0 || nx>=M)
                            continue;
                        if(visited[ny][nx])
                            continue;
                        if(a[ny][nx]==0)
                            continue;
                        visited[ny][nx] = 1;
                        v.push_back(make_pair(ny, nx));
                    }
                }
            }
        }
            cout << cnt << '\n';


    }
}