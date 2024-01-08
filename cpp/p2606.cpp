#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n, m,tmp1,tmp2,visited[101], ans = 0;

void dfs(int start, vector<int> *a){
    visited[start] = 1;
    for(int i=0;i<a[start].size();i++){
        if(!visited[a[start][i]]){
            ans++;
            dfs(a[start][i], a);
        }
    }
}

int main(){
    cin >> n >> m;
    vector<int> a[n+1];
    for(int i=0;i<m;i++){
        cin >> tmp1>> tmp2;
        a[tmp1].push_back(tmp2);
        a[tmp2].push_back(tmp1);
    }
    fill(visited, visited + 101, 0);
    dfs(1,a);
    cout << ans;
}