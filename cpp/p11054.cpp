#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    // dp[i] = i번째 수를 마지막으로 하는 가장 긴 바이토닉 부분 수열의 길이
    int dp[n];
    // dp2[i] = i번째 수를 시작으로 하는 가장 긴 바이토닉 부분 수열의 길이
    int dp2[n];
    for (int i = 0;i<n;i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n;i++)
    {
        dp[i] = 1;
        for (int j = 0; j < i;j++)
        {
            if(arr[i]>arr[j] && dp[i]<dp[j]+1)
            {
                dp[i] = dp[j] + 1;
            }
        }
    }

    for (int i = n-1; i >= 0;i--)
    {
        dp2[i] = 1;
        for (int j = n-1; j > i;j--)
        {
            if(arr[i]>arr[j] && dp2[i]<dp2[j]+1)
            {
                dp2[i] = dp2[j] + 1;
            }
        }
    }
    int max = 0;
    for (int i = 0; i < n;i++)
    {
        if(max < dp[i] + dp2[i] - 1)
        {
            max = dp[i] + dp2[i] - 1;
        }
    }
    cout << max;
}
