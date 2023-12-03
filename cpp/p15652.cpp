#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n, m;

int arr[9];
int visited[9];
void dfs(int num, int cnt){
    if(cnt==m){
        for (int i = 0; i < m;i++){
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for (int i = num; i <= n;i++){
        visited[i] = 1;
        arr[cnt] = i;
        dfs(i, cnt + 1);
        visited[i] = 0;
    }
}
int main(){
    ios_base::sync_with_stdio(false);   
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    dfs(1, 0);
    return 0;
}