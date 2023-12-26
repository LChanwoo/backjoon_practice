#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    int a[100001][3] = {0};
    int max_dp[3] = {0};
    int min_dp[3] = {0};
    cin >> N;
    for (int i = 1; i <= N;i++){
        cin >> a[i][0] >> a[i][1] >> a[i][2];
    }
    for (int i = 1; i <= N;i++){
        int temp0 = max_dp[0], temp1 = max_dp[1], temp2 = max_dp[2];
        max_dp[0] = max(temp0, temp1) + a[i][0];
        max_dp[1] = max(temp0, max(temp1, temp2)) + a[i][1];
        max_dp[2] = max(temp1, temp2) + a[i][2];
        temp0 = min_dp[0], temp1 = min_dp[1], temp2 = min_dp[2];
        min_dp[0] = min(temp0, temp1) + a[i][0];
        min_dp[1] = min(temp0, min(temp1, temp2)) + a[i][1];
        min_dp[2] = min(temp1, temp2) + a[i][2];
    }
    cout << max(max_dp[0], max(max_dp[1], max_dp[2])) << ' ' << min(min_dp[0], min(min_dp[1], min_dp[2]));
}