#include<iostream>
#include<utility>
#include<algorithm>
using namespace std;

int main(){
    int N,d,p,idx;
    cin >> N;

    // 상담에 걸리는 기간과 금액을 pair로 저장
    pair<int, int> arr[N];
    for (int i = 1; i <= N; i++)
    {
        cin >> d >> p;
        arr[i] = {d,p};
    }

    // dp[i]는 i일까지 얻을 수 있는 최대 수익
    int dp[25];

    // 상담에 걸리는 기간이 N일을 넘어가면 상담을 할 수 없으므로 0으로 초기화
    // dp[i]는 i일까지 얻을 수 있는 최대 수익
    // 당일에 첫 상담을 시작하면 default는 dp[i] = arr[i].second
    for(int i=1; i<=N; i++){
        if(i+arr[i].first-1 <= N)
            dp[i]=arr[i].second;
        else
            dp[i]=0;
    }
    for(int i=1; i<=N; i++){
        // i일에 상담을 시작하면 i+arr[i].first일에 상담이 끝남
        if(i+arr[i].first <= N){
            for(int j=i+arr[i].first; j<=N; j++){
                if(i+arr[j].first <= N && j+arr[j].first <= N+1){
                    dp[j] = max(dp[j], dp[i] + arr[j].second);
                }
            }
        }
    }
    
    // dp[N]에는 N일까지 얻을 수 있는 최대 수익이 저장되어 있으므로 그 중 가장 큰 값을 출력
    cout << *max_element(dp+1, dp + N+1);
}