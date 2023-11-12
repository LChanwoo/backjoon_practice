#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1, s2;

    cin >> s1 >> s2;

    int dp[s1.length()+1][s2.length()+1];

    for(int i=0; i<=s1.length(); i++){
        dp[i][0] = 0;
    }

    for(int i=0; i<=s2.length(); i++){
        dp[0][i] = 0;
    }

    for(int i=1; i<=s1.length(); i++){
        for(int j=1; j<=s2.length(); j++){
            if(s1[i-1] == s2[j-1]){
                dp[i][j] = dp[i-1][j-1]+1;
            }
            else{
                if(dp[i-1][j] > dp[i][j-1]){
                    dp[i][j] = dp[i-1][j];
                }
                else{
                    dp[i][j] = dp[i][j-1];
                }
            }
        }
    }
    cout << dp[s1.length()][s2.length()] << '\n';

    int i = s1.length();
    int j = s2.length();
    string lcs = "";
    while(i>0 && j>0){
        if(s1[i-1] == s2[j-1]){
            lcs = s1[i-1] + lcs;
            i--;
            j--;
        }
        else{
            if(dp[i-1][j] > dp[i][j-1]){
                i--;
            }
            else{
                j--;
            }
        }
    }
    cout << lcs;



}