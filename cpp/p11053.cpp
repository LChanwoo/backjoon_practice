#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



int main(){
    int N,n;
    cin >> N;
    int arr[N];
    int dp[N];
    for(int i=0;i<N;i++){
        cin >> n;
        arr[i]=n;
    }
    for(int i=0;i<N;i++){
        dp[i]=1;
        for(int j=0;j<i;j++){
            if(arr[i] > arr[j] && dp[i] < dp[j] + 1){
                dp[i] = dp[j] + 1;
            }
        }
    }

    cout << *max_element(dp, dp + N);
}
