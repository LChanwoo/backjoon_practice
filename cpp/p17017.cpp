#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

int N, K, turn = 1;
int visited[2][500001];

queue<int> q;

void bfs(int n, int k){
    visited[0][n] = 1;
    q.push(n);
    while(q.size()){
        K+=turn;
        if(K>500000){
            cout << -1;
            return;
        }
        if(visited[turn%2][K]){
            cout << turn << '\n';
            return;
        }
        int qsize = q.size();
        while(qsize--){
            int x = q.front();
            q.pop();
            for(int next : {x-1,x+1,2*x}){
                if(next < 0 ||next > 500000 || visited[turn%2][next])
                    continue;
                visited[turn%2][next] = visited[(turn+1)%2][x] + 1;
                if(next == K){
                    cout << turn << '\n';
                    return;
                }
                q.push(next);
            }
        }
        turn++;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> K;
    if (N == K)
    {
        cout << 0;
        return 0;
    }
    bfs(N, K);
    return 0;
}