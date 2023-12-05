#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n);
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int ans = 0;
    for (int i = 0; i < m;i++){
        ans += a[n - 1 - i];
    }
    ans *= (k / m);
    ans += a[n - 1 - (k % m)];
    cout << ans << '\n';
    return 0;
}