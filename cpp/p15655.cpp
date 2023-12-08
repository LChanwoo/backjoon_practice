#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n, m, num[9];
bool visited[9];

void dfs(int start,int cnt){
    if(cnt == m){
        for (int i = 0;i<m;i++){
            cout << num[i] << ' ';
        }
        cout << '\n';
    }
    for (int i = start; i < n;i++){
        if(visited[i]) continue;
        visited[i] = true;
        swap(num[i], num[cnt]);
        dfs(i, cnt + 1);
        swap(num[i], num[cnt]);
        visited[i] = false;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < n;i++){
        cin >> num[i];
    }
    sort(num, num + n);
    dfs(0, 0);
}