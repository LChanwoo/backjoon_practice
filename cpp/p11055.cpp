#include<iostream>  
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    // dp[i] = i번째 수를 마지막으로 하는 가장 큰 증가하는 부분 수열의 합
    int dp[n];
    for (int i = 0;i<n;i++){
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        dp[i] = arr[i];
        for (int j = 0; j < i;j++){
            if(arr[i] > arr[j] && dp[i] < dp[j] + arr[i] )
                dp[i] = dp[j] + arr[i];
        }
    }
    cout << *max_element(dp, dp + n);
}