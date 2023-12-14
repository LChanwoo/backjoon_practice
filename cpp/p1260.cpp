#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

int N, M, V;
vector<int> a[1001];
bool check[1001];
queue<int> q;

void dfs(int curr){
    check[curr] = true;
    cout << curr << " ";
    for (int i = 0; i < a[curr].size();i++){
        int next = a[curr][i];
        if(check[next]==false){
            dfs(next);
        }
    }
}

void bfs(int start){
    q.push(start);
    check[start] = true;
    while(!q.empty()){
        int curr = q.front();
        q.pop();
        cout << curr << " ";
        for (int i = 0; i < a[curr].size();i++){
            int next = a[curr][i];
            if(check[next]==false){
                check[next] = true;
                q.push(next);
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> M >> V;
    for (int i = 0; i < M;i++){
        int u, v;
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    for (int i = 1; i <= N;i++){
        sort(a[i].begin(), a[i].end());
    }
    dfs(V);
    cout << '\n';
    for (int i = 1; i <= N;i++){
        check[i] = false;
    }
    bfs(V);
    cout << '\n';
}

