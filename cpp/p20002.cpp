// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int N;
//     cin >> N;
//     vector<vector<int>> v(N+1,vector<int>(N+1));
//     vector<vector<int>> dp(N+1,vector<int>(N+1));
//     int max = INT32_MIN;
//     for(int i =0; i<N;i++){
//         for(int j=0;j<N;j++){
//             cin >> v[i][j];
//             if(v[i][j]>max){
//                 max = v[i][j];
//             }
//         }
//     }
//     int k=2;
//     while(k<=N){
//         int x=0, y=0;
//         while(x+k<=N && y+k<=N){
//             int sum = 0;
//             //cout <<"x: "<<x<<" y: "<<y<<" k: "<<k<<endl;
//             for(int i =x; i<x+k;i++){
//                 for(int j=y;j<y+k;j++){
//                     //cout<<v[j][i]<<" ";
//                     sum+=v[j][i];
//                     if(sum>max){
//                         max = sum;
//                     }
//                 }
//                 //cout << endl;
//             }
//             if(x+k<N){
//                 x++;
//             }else{
//                 x=0;
//                 y++;
//             }
//         }
//         k++;
//     }
//     cout << max << endl;
//     return 0;
// }
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<vector<int>> v(N, vector<int>(N));
    vector<vector<int>> dp(N, vector<int>(N));

    int max_sum = INT_MIN;

    // 입력과 동시에 최대값 찾기
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> v[i][j];
            max_sum = max(max_sum, v[i][j]);
        }
    }

    // 누적 합 배열 dp 계산
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            dp[i][j] = v[i][j];
            if (i > 0) dp[i][j] += dp[i - 1][j];
            if (j > 0) dp[i][j] += dp[i][j - 1];
            if (i > 0 && j > 0) dp[i][j] -= dp[i - 1][j - 1];
        }
    }

    // 모든 부분 배열을 순회하며 최대 부분 배열 합 찾기
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = i; k < N; k++) {
                for (int l = j; l < N; l++) {
                    int current_sum = dp[k][l];
                    if (i > 0) current_sum -= dp[i - 1][l];
                    if (j > 0) current_sum -= dp[k][j - 1];
                    if (i > 0 && j > 0) current_sum += dp[i - 1][j - 1];
                    max_sum = max(max_sum, current_sum);
                }
            }
        }
    }

    cout << max_sum << endl;
    return 0;
}



