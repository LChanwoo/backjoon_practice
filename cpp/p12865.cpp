#include <iostream>
#include <utility>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    int W, V;
    pair<int, int> item[N+1];

    for(int i=1; i<=N; i++){
        cin >> W >> V;
        item[i] = {W, V};
    }
    
    // dp[i][j]는 i번째 물건까지 고려했을 때, 배낭의 무게가 j일 때 최대 가치 
    int dp[N+1][K+1];

    // dp[0][j]는 배낭의 무게가 0일 때, 최대 가치는 0
    for(int j=0; j<=K; j++){
        dp[0][j] = 0;
    }

    // dp[i][0]는 배낭의 무게가 0일 때, 최대 가치는 0
    for(int i=0; i<=N; i++){
        dp[i][0] = 0;
    }

    for (int i = 1; i <= N;i++){
        for (int j = 1; j <= K;j++){
            // i번째 물건의 무게가 배낭의 무게보다 크면 i번째 물건은 배낭에 넣을 수 없음
            if(item[i].first > j){
                dp[i][j] = dp[i - 1][j];
            }
            // i번째 물건의 무게가 배낭의 무게보다 작거나 같으면 i번째 물건을 넣을 수 있음
            else{
                // i번째 물건을 넣지 않았을 때의 최대 가치와 i번째 물건을 넣었을 때의 최대 가치 중 큰 값
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - item[i].first] + item[i].second);
            }
        }
    }

    cout << dp[N][K];
}