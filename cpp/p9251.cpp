#include<iostream>
#include<string>

using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    // dp[i][j] = s1[0~i]와 s2[0~j]의 LCS
    int dp[s1.length()+1][s2.length()+1];

    // dp 초기화
    for(int i=0; i<=s1.length(); i++){
        dp[i][0] = 0;
    }
    // dp 초기화
    for(int i=0; i<=s2.length(); i++){
        dp[0][i] = 0;
    }

    for(int i=1; i<=s1.length(); i++){
        for(int j=1; j<=s2.length(); j++){
            if(s1[i-1] == s2[j-1]){
                dp[i][j] = dp[i-1][j-1]+1;
            }
            else{
                // dp[i-1][j]와 dp[i][j-1] 중 큰 값
                // dp[i-1][j]는 s1[i-1]과 s2[j-2]의 LCS
                // dp[i][j-1]는 s1[i-2]와 s2[j-1]의 LCS
                if(dp[i-1][j] > dp[i][j-1]){
                    dp[i][j] = dp[i-1][j];
                }
                else{
                    dp[i][j] = dp[i][j-1];
                }
            }
        }
    }
    cout << dp[s1.length()][s2.length()];
}