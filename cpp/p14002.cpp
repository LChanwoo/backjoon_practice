#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
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
            // arr[i]가 arr[j]보다 크고, dp[i]가 dp[j] + 1보다 작으면 dp[i]를 dp[j] + 1로 갱신한다.
            if(arr[i] > arr[j] && dp[i] < dp[j] + 1 )
                dp[i] = dp[j] + 1;
        }
    }
    int max = *max_element(dp, dp + n);

    cout << *max_element(dp, dp + n);

    // 역추적
    int i = n-1;
    // max는 dp의 최댓값이므로, dp의 최댓값부터 시작해서 dp[i] == max인 i를 찾는다.
    int j = max;
    // ans는 역추적한 수열을 저장하는 배열
    int ans[max];
    while(i>=0){
        // dp[i] == j인 i를 찾으면, ans[j-1]에 arr[i]를 저장하고, j를 1 감소시킨다.
        if(dp[i] == j){
            // ans는 역추적한 수열을 저장하는 배열이므로, ans[j-1]에 arr[i]를 저장한다.
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