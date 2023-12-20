#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// dp[i] : i번째 전깃줄을 포함했을 때 최대 전깃줄 개수
// LIS와 같은 방식으로 풀이
int n,a,b,dp[101];
vector<pair<int, int>> v;

int main(){
    cin >> n;
    for (int i = 0;i<n;i++){
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort(v.begin(), v.end());
    for(int i = 0;i<n;i++){
        dp[i] = 1;
        for(int j = 0;j<i;j++){
            if(v[i].second>v[j].second) dp[i] = max(dp[i], dp[j] + 1);
        }
    }
    cout << n - *max_element(dp, dp + n);
}