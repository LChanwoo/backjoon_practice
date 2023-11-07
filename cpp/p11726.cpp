#include<iostream>

using namespace std;

int dp[1001];

void solve(int n){
    dp[1] = 1;
    dp[2] = 2;
    for (int i = 3; i <=n; i++)
    {
        dp[i] = (dp[i-1]%10007+dp[i-2]%10007)%10007;
    }
}

int main(){
    int n;
    cin >> n;
    solve(n);
    cout << dp[n];
    return 0;
}