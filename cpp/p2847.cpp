#include<iostream>
#include<algorithm>
using namespace std;

int n, a[101], ans;

int main(){
    cin >> n;
    for (int i = 0; i < n;i++) cin >> a[i];
    for (int i = n - 2; i >= 0;i--){
        if(a[i]>=a[i+1]){
            ans += a[i] - a[i + 1] + 1;
            a[i] = a[i + 1] - 1;
        }
    }
    cout << ans << '\n';
    return 0;
}