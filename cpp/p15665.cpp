#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n, m, x;
vector<int> v;
int visited[8],ans[8];

void go(int cnt){
    if(cnt==m){
        for (int i = 0; i < m;i++){
            cout << ans[i] << ' ';
        }
        cout << '\n';
        return;
    }
    int before = -1;
    for (int i = 0; i < n;i++){
        if( before ==v[i]) continue;
        ans[cnt] = v[i];
        go(cnt + 1);
        before = v[i];
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
    go(0);
}
