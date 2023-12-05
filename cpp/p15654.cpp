#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n, m;

int arr[9];
int ans[9];
int visited[9];
void dfs(int cnt){
    if(cnt==m){
        for (int i = 0; i < m;i++){
            cout << ans[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for (int i = 1; i <= n;i++){
        if(visited[i])
            continue;
        visited[i] = 1;
        ans[cnt] = arr[i];
        dfs(cnt + 1);
        visited[i] = 0;
    }
}
int main(){
    ios_base::sync_with_stdio(false);   
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for(int i=1;i<=n;i++)
        cin >> arr[i];
    sort(arr, arr + n + 1);
    dfs(0);
    return 0;
}