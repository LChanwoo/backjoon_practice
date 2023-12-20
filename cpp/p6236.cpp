#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n, m, ans= 1e9;
int a[100001] = {0};

int main(){
    cin >> n >> m;
    int sum = 0, mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        mx = max(mx, a[i]); 
    }
    int l=mx, r = sum;

    while(l<=r){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int mid = (l + r) / 2;
        int cnt = 1, tmp = 0;
        for (int i = 0; i < n; i++)
        {
            if(tmp+a[i]>mid){
                cnt++;
                tmp = 0;
            }
            tmp += a[i];
        }
        if(cnt<=m){
            ans = min(ans, mid);
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }
    cout << ans;
    return 0;
}