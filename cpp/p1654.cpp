#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int k, n;
long long a[10001];

int main(){
    cin >> k >> n;
    for (int i = 0; i < k;i++){
        cin >> a[i];
    }
    long long l = 1, r = *max_element(a, a + k);
    long long ans = 0;
    while(l<=r){
        long long mid = (l + r) / 2;
        int cnt = 0;
        for (int i = 0; i < k;i++){
            cnt += a[i] / mid;
        }
        if(cnt>=n){
            ans = max(ans, mid);
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    cout << ans << '\n';
    return 0;
}