#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> a[100001];
int n;
int parent[100001];



void dfs(int x){
    for (int i = 0; i < a[x].size();i++){
        int y = a[x][i];
        if(!parent[y]){
            parent[y] = x;
            dfs(y);
        }
    }
}

int main(){
    cin >> n; 
    for (int i = 1; i < n;i++){
        int u, v;
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    parent[1] = 1;
    dfs(1);
    for (int i = 2; i <= n;i++){
        cout << parent[i] << '\n';
    }
}
