#include<iostream>
#include<algorithm>
using namespace std;

int n, a[100001], ans[2];

int main() {
    // 입출력 속도 향상
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // 입력
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    // 정렬
    sort(a, a+n);
    // 투 포인터
    int l = 0, r = n-1, sum = 2e9+1;
    while (l < r) {
        int tmp = a[l] + a[r];
        // 절댓값이 더 작은 경우 즉, 더 0에 가까운 경우
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