#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n, m, x;
vector<int> v;
int visited[8],ans[8];

void go(int start,int cnt){
    if(cnt==m){
        for (int i = 0; i < m;i++){
            cout << ans[i] << ' ';
        }
        cout << '\n';
        return;
    }
    int before = -1;
    for (int i = cnt; i < n;i++){
        if(visited[i] || before ==v[i] || start>v[i]) continue;
        ans[cnt] = v[i];
        before = v[i];
        visited[i] = 1;
        go(v[i],cnt + 1);
        visited[i] = 0;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    go(v[0],0);
}
