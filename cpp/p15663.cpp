#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n, m, tmp;
int visited[9];
vector<int> v,ans(9);

void dfs(int cnt){
    if(cnt == m){
        for (int i = 0; i < m;i++){
            cout << ans[i] << ' ';
        }
        cout << '\n';
        return;
    }
    int before = 0;
    for (int i = 0;i<n;i++){
        if(visited[i] || before == v[i]) continue;
        ans[cnt] = v[i];
        before = v[i];
        visited[i] = 1;
        dfs(cnt + 1);
        visited[i] = 0;

    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < n;i++){
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    dfs(0);
    return 0;
}