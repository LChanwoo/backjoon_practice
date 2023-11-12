#include<iostream>

using namespace std;

int main(){
    int N;
    cin >> N;

    // dp[N][i] = 길이가 N이고 마지막 숫자가 i인 계단수의 개수
    long long int dp[N+1][10];
    
    // 길이가 1인 계단수의 개수는 1개
    for(int i=0; i<10; i++){
        dp[1][i] = 1;
    }

    // 길이가 2이상인 계단수의 개수
    for(int i=2; i<=N; i++){
        for(int j=0; j<10; j++){
            // 마지막 숫자가 0인 경우
            if(j == 0){
                dp[i][j] = dp[i-1][j+1];
            }
            // 마지막 숫자가 9인 경우
            else if(j == 9){
                dp[i][j] = dp[i-1][j-1];
            }
            // 마지막 숫자가 1~8인 경우
            else{
                dp[i][j] = dp[i-1][j-1] + dp[i-1][j+1];
            }
            dp[i][j] %= 1000000000;
        }
    }

    long long int sum = 0;
    for(int i=1; i<10; i++){
        sum += dp[N][i];
    }
    cout << sum % 1000000000;

    

}