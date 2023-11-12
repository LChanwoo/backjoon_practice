#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    // dp[i] = i번째 수를 마지막으로 하는 가장 긴 증가하는 부분 수열의 길이
    int dp[n];
    for (int i = 0;i<n;i++){
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        dp[i] = 1;
        for (int j = 0; j < i;j++){
            if(arr[i] > arr[j] && dp[i] < dp[j] + 1 )
                dp[i] = dp[j] + 1;
        }
    }
    int max = *max_element(dp, dp + n);

    cout << *max_element(dp, dp + n);

    int i = n-1;
    int j = max;
    int ans[max];
    while(i>=0){
        if(dp[i] == j){
            ans[j-1] = arr[i];
            j--;
        }
        i--;
    }
    cout << '\n';
    for(int i=0; i<max; i++){
        cout << ans[i] << ' ';
    }

}