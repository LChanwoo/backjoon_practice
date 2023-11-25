#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    int N, cnt=0;
    cin >> N;

    //dp[i] = i를 제곱수의 합으로 나타냈을 때, 최소항의 개수z
    vector<int> dp(N+1, 0);
    for(int i=1; i<=N; i++){
        // i를 제곱수의 합으로 나타내기 위해서는
        // i보다 작은 제곱수들의 합에 i를 뺀 값이 제곱수여야 한다.
        // 그 중에서 최소항의 개수를 가진 것을 dp[i]에 저장한다.
        // dp[i]의 초기 값은 i를 제곱수의 합으로 나타내는 최대 개수인 i로 설정한다.
        dp[i] = i;
        for(int j=1; j*j<=i; j++){
            // dp[i-j*j] + 1은 i-j*j를 제곱수의 합으로 나타내는 최소항의 개수에
            // j*j를 더한 것이다.
            // 이를 통해 i를 제곱수의 합으로 나타내는 최소항의 개수를 구할 수 있다.
            dp[i] = min(dp[i], dp[i-j*j] + 1);
        }
    }
    cout << dp[N];
}