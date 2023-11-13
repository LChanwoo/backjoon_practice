#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;
    int arr[200000+3] = {0};
    int dp[200000+3] = {0};
    for(int i=1;i<N+1;i++){
        cin >> arr[i];
    }

    for(int i=1;i<3;i++){
        dp[i] = INT32_MIN;
        dp[i] = max(dp[i], dp[i - 1] + arr[i]);   
    }
    for(int i=3;i<N+3;i++){
        dp[i] = INT32_MIN;
        dp[i] = max(dp[i], dp[i - 3] + 2 * (arr[i - 2] + arr[i - 1] + arr[i]));
        dp[i] = max(dp[i] , dp[i-1] + arr[i]);
    }
    cout << dp[N+2] << endl;

    return 0;

}