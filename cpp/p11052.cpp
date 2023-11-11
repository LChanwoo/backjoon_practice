#include<iostream>
#include<string>
#include<utility>
using namespace std;

int main(){
    int N;
    cin >> N;
    int P[N+1];
    int dp[N+1];

    int tmp;
    for(int i=1; i<=N; i++){
        cin >>P[i];
    }
    dp[0] = 0;
    dp[1] = P[1];
    for(int i=2; i<=N; i++){
        dp[i] = P[i];
        for(int j=1; j<=i; j++){
            tmp = dp[i-j] + P[j];
            if(dp[i] < tmp){
                dp[i] = tmp;
            }
        }
    }
    cout << dp[N];
}