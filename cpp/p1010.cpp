#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long t, n, m;

int main(){
    cin >> t;
    while(t--){
        cin>>n>>m;
        long long ans = 1;
        for (int i = 1; i <= n;i++){
            ans *= (m - i + 1);
            ans /= i;
        }
        cout << ans << '\n';
    }
}