#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n, m, tmp;
int visited[9];
vector<int> v,ans;

void dfs(int start, int cnt){
    if(cnt == m){
        for (int i = 0; i < m;i++){
            cout << ans[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for (int i = start;i<n;i++){
        if(visited[i]) continue;
        ans.push_back(v[i]);
        dfs(i,cnt + 1);
        ans.pop_back();

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
    dfs(0, 0);
    return 0;
}