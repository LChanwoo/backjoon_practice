#include<iostream>
#include<algorithm>
#include<queue>
#include<cstring>
using namespace std;

int n, k;
int visited[100001];
int cnt[100001];
queue<int> q;
void bfs(int n, int k){
    visited[n] = 1;
    cnt[n] = 1;
    q.push(n);
    while(q.size()){
        int x = q.front();
        q.pop();
        if(x == k){
            cout << visited[x] - 1 << '\n';
            cout << cnt[x] << '\n';
            return;
        }
        for(int next : {x-1, x+1, 2*x}){
            if(next < 0 || next > 100000)
                continue;
            if(visited[next] && visited[next] == visited[x] + 1){
                cnt[next] += cnt[x];
            }else if(next>=0 && next<=100000 && !visited[next]){
                visited[next] = visited[x] + 1;
                cnt[next] += cnt[x];
                q.push(next);
            }
        }
    }
}

int main(){
    cin >> n >> k;
    bfs(n, k);
    return 0;
}