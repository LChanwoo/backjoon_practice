#include<iostream>
using namespace std;

int main(){
    long long dp[101]={0};
    dp[0]=0;
    dp[1]=1;
    dp[2]=1;
    dp[3]=1;
    dp[4]=2;
    dp[5]=2;
    for(int i=6;i<=100;i++){
        dp[i]=dp[i-1]+dp[i-5];
    }
    int N;
    cin >> N;

    
    for(int i=0;i<N;i++){
        int n;
        cin >> n;
        cout << dp[n] << endl;
    }
}