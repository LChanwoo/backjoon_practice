#include<iostream>

using namespace std;
int main(){
    long long n;
    cin >> n;
    n=n%1000000;
    long long dp[1000001]={0};
    dp[0]=0;
    dp[1]=1;
    for(int i =2 ; i<=n;i++){
        dp[i]=(dp[i-1]+dp[i-2])%1000000;
    }
    cout << dp[n];
    return 0;
}