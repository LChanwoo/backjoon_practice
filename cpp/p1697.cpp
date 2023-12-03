#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

int n,k;
int visited[100001];
queue<int> q;

void bfs(int n, int k){
    q.push(n);
    visited[n] = 1;
    while(q.size()){
        int x = q.front(); q.pop();
        if(x==k){
            cout << visited[x] - 1 << '\n';
        }
        for(int next : {x-1,x+1,x*2}){
            if(next < 0|| next >100000 || visited[next])
                continue;
            if(!visited[next]){
                visited[next] = visited[x] + 1;
                q.push(next);
            }
        }
    }
}

int main(){
    cin >> n >> k;
    bfs(n,k);
    return 0;
}