#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    // i원을 만드는 경우의 수
    long long int dp[k+1];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    fill(dp, dp + k + 1, 0);
    dp[0] = 1;
    for(int i=0;i<n;i++)
    {
        for (int j = arr[i]; j<=k; j++)
        {
            dp[j] += dp[j - arr[i]];
        }
    }

    cout << dp[k];
}