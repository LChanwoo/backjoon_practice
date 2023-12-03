#include<iostream>
using namespace std;

int arr[9];
int n, m;

void dfs(int n, int cnt){
    if(cnt==m){
        for (int i = 0; i < m;i++){
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i=1;i<=n;i++){
        arr[cnt] = i;
        dfs(n, cnt + 1);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        arr[i] = i;
    }
    dfs(n, 0);
    return 0;
}
