#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n, m;
bool visited[10001];
vector<int> v[10001];
int dfs(int now){
    visited[now] = true;
    int ret = 1;
    for (int i = 0; i < v[now].size();i++){
        int next = v[now][i];
        if(!visited[next]){
            ret += dfs(next);
        }
    }
    return ret;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin>>n>>m;
    for (int i = 0; i < m;i++){
        int a, b;
        cin >> a >> b;
        v[b].push_back(a);
    }

    int max = 0;
    vector<int> ans;
    for (int i = 1; i <= n;i++){
        fill(visited, visited + 10001, false);
        int tmp = dfs(i);
        if(max<tmp){
            max = tmp;
            ans.clear();
            ans.push_back(i);
        }
        else if(max==tmp){
            ans.push_back(i);
        }
    }
    sort(ans.begin(), ans.end());
    for (int i : ans)
        cout << i << " ";
    return 0;
}