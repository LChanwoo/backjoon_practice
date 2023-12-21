#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long x, y, z, ans=1000000000;

int main(){
    cin >> x >> y;
    z = y * 100 / x;
    long long l = 1, r = ans;
    while(l<=r){
        long long mid = (l + r) / 2;
        long long temp = (y + mid) * 100 / (x + mid);
        if(temp> z){
            ans = mid;
            r = mid - 1;
        }else l = mid + 1;
    }
    if(ans == r) cout << -1;
    else cout << ans;
    return 0;
}