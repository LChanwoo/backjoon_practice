#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int t, n, k, ret, sum, hi, lo, min_diff;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> t;
    while(t--){
        cin >> n >> k;
        int a[1000001]={0};
        for(int i=0;i<n;i++) cin >> a[i];
        sort(a, a+n);
        hi = n-1;
        lo = 0;
        ret = 0;
        min_diff = 1e9;
        while(lo<hi){
            sum = a[lo] + a[hi];
            if(sum==k){
                lo++;
                hi--;
            }
            else if(sum<k) lo++;
            else hi--;
            if(min_diff>abs(sum-k)){
                min_diff = abs(sum-k);
                ret = 1;
            }
            else if(min_diff==abs(sum-k)) ret++;
        }
        cout << ret << "\n";
    }
}
