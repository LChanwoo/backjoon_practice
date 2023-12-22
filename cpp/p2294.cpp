#include<iostream>
#include<algorithm>
using namespace std;

int n, k, tmp;
int dp[10001];

int main(){
    cin >> n >> k;
    fill(dp, dp + 10001, 1e9);
    dp[0] = 0;
    for (int i = 1; i <= n;i++){
        cin >> tmp;
        for (int j = tmp; j <= k;j++){
            dp[j] = min(dp[j], dp[j - tmp] + 1);
        }
    }
    if(dp[k]==1e9) cout << -1;
    else cout << dp[k];
    return 0;
}