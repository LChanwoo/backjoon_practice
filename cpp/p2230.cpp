#include<iostream>
#include<algorithm>
using namespace std;

int n, m;
int a[100001] = {0};
int sum[100001] = {0};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    for (int i = 1; i <= n;i++) cin >> a[i];
    sort(a, a + n);
    int l = 1, r = 1, ans = 2e9+1;
    while(l<=r && r<=n){
        int tmp = a[r] - a[l];
        if(tmp>=m){
            ans = min(ans, tmp);
            l++;
        }
        else{
            r++;
        }
    }
    cout << ans;
    return 0;
}