#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n, m;

void go(int index, vector<int> &a, vector<int> &ans){
    if(ans.size()==m){
        for (int i = 0; i < m;i++){
            cout << ans[i] << ' ';
        }
        cout << '\n';
        return;
    }
    if(index>=n){
        return;
    }
    ans.push_back(a[index]);
    go(index + 1, a, ans);
    ans.pop_back();
    go(index + 1, a, ans);
}

int main(){
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    vector<int> ans;
    go(0, a, ans);
    return 0;
}