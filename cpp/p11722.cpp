#include<iostream>
#include<cmath>
#include<algorithm>


using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int dp[n];
    for (int i = 0;i<n;i++){
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        dp[i] = 1;
        for (int j = 0; j < i;j++){
            if(arr[i] < arr[j] && dp[i] < dp[j] + 1 )
                dp[i] = dp[j] + 1;
        }
    }
    cout << *max_element(dp, dp + n);
}