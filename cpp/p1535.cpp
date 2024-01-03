#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n,L[21],J[21];
int dp[21][101];

int main(){
    cin >> n;
    for (int i = 1; i <= n;i++) cin >> L[i];
    for (int i = 1; i <= n;i++) cin >> J[i];
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= 100;j++){
            if(j-L[i]>=0) dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - L[i]] + J[i]);
            else dp[i][j] = dp[i - 1][j];
        }
    }
    cout << dp[n][99] << '\n';
    return 0;
}