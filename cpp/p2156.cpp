#include <iostream>
#include <algorithm>
#include <bitset>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    int N;
    cin >> N;
    int arr[10009];
    int dp[10009];
    int ans = 0;
    for(int i=3;i<=N+2;i++){
        cin >> arr[i];
    }
    for(int i=3;i<=N+2;i++){
        int temp = max(dp[i-3]+arr[i-1]+arr[i], dp[i-2]+arr[i]);
        dp[i] = max(temp, dp[i-1]);
    }

    cout << dp[N+2]  ;
    return 0;
}