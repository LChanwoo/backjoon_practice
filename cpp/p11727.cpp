#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int dp[1001]={0};
    dp[1]=1;
    dp[2]=3;
    for(int i=3;i<=N;i++){
        dp[i]=(dp[i-1]+2*dp[i-2])%10007;
    }
    cout << dp[N];
    return 0;
}