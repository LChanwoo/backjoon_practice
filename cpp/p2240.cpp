#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int t, w;
int a[1001] = {0};
int dp[1001][31][2] = {0};

int main(){
    cin >> t >> w;
    for (int i = 1; i <= t;i++) cin >> a[i];
    dp[0][0][0] = 0;
    dp[0][0][1] = -1;
    for (int i = 1; i <= t;i++){
        for (int j = 0; j <= w;j++){
            if(j==0){
                dp[i][j][0] = dp[i - 1][j][0] + (a[i] == 1);
                dp[i][j][1] = dp[i - 1][j][1] + (a[i] == 2);
            }
            else{
                dp[i][j][0] = max(dp[i - 1][j][0], dp[i - 1][j - 1][1]) + (a[i] == 1);
                dp[i][j][1] = max(dp[i - 1][j][1], dp[i - 1][j - 1][0]) + (a[i] == 2);
            }
        }
    }
    int ans = 0;
    for (int i = 0; i <= w;i++){
        ans = max(ans, max(dp[t][i][0], dp[t][i][1]));
    }
    cout << ans << '\n';
    return 0;
}