#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long int dp[36] = {0};
    dp[0] = 1;
    for (int i = 1; i <= n;i++){
        for (int j = 0; j < i;j++){
            dp[i] += dp[j] * dp[i - j - 1];
        }
    }
    cout << dp[n] << '\n';
    return 0;
}