#include<iostream>
#include<algorithm>
using namespace std;

int n, a[100001], ans[2];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    int l = 0, r = n-1, sum = 2e9+1;
    while (l < r) {
        int tmp = a[l] + a[r];
        if (abs(tmp) < sum) {
            sum = abs(tmp);
            ans[0] = a[l];
            ans[1] = a[r];
        }
        if (tmp < 0) l++;
        else r--;
    }
    cout << ans[0] << ' ' << ans[1];
}