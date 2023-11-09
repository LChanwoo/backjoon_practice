#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int N; cin >> N;
    int input[N];
    int dp[N];
    for (int i = 0; i < N; i++)
    {
        cin >> input[i];
    }
    int end = 0;
    dp[0] = input[0];
    for (int i = 0; i < N;i++){
        if(dp[end] < input[i]){
            dp[++end] = input[i];
        }else{
            int idx = lower_bound(dp, dp + end, input[i]) - dp;
            dp[idx] = input[i];
        }
    }

    cout << end + 1;
    return 0;
}