#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    int N, cnt=0;
    cin >> N;
    vector<int> dp(N+1, 0);
    for(int i=1; i<=N; i++){
        dp[i] = i;
        for(int j=1; j*j<=i; j++){
            dp[i] = min(dp[i], dp[i-j*j] + 1);
        }
    }
    cout << dp[N];
}