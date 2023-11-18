#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    // 01타일 문제
    // 1, 1
    // 2, 00, 11
    // 3, 100, 001, 101
    // 4, 0000, 1100, 1001, 0011, 1111
    // 5, 10000, 00100, 00001, 11001, 11100, 00111, 10011, 11111
    int dp[n];
    dp[0] = 1;
    dp[1] = 2;
    for(int i=2; i<n; i++){
        dp[i] = (dp[i-1] + dp[i-2]) % 15746;
    }
    cout << dp[n-1];
}