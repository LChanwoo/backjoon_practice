#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[100001];
    int dp[100001];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    dp[0] = arr[0];
    int max = dp[0];
    for (int i = 1; i < n; i++)
    {
        if(dp[i-1]+arr[i]>arr[i]){
            dp[i] = dp[i-1]+arr[i];
        }else{
            dp[i] = arr[i];
        }
        if(dp[i]>max){
            max = dp[i];
        }
    }
    cout << max;
    
    return 0;
}