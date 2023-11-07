#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> arr;
    vector<int> dp;
    int tmp,tmp2,tmp3,tmp4;
    
    for(int i=0;i<3;i++){
        arr.push_back(0);
        dp.push_back(0);
    }
    for(int i=0;i<N;i++){
        cin >> tmp;
        arr.push_back(tmp);
    }

    for (int i = 3; i < arr.size(); i++){
        tmp =   max(dp[i-3]+arr[i] +arr[i-1]+arr[i-2] ,dp[i-3] + 2 * ( arr[i] + arr[i-1] + arr[i-2]));
        tmp2 =  max(dp[i-3]+2 *(arr[i] +arr[i-1])+arr[i-2] ,dp[i-3] + 2 *  arr[i] + arr[i-1] + arr[i-2]);
        dp.push_back(max(tmp,tmp2));
        // cout << dp[i] << endl;
    }
    for (int i = 0;i<arr.size();i++){
        cout << dp[i] << " ";
    }
        cout << dp[arr.size() - 1];
    return 0;
}


// #include <iostream>
// #include <bitset>
// using namespace std;

// bitset<200004> bs;
// long long arr[200004];
// long long dp[200004];

// int main() {
//     int N;
//     cin >> N;
//     long long ans = 0;

//     for (int i = 1; i <= N; i++) {
//         cin >> arr[i];
//         if (arr[i] > 0) {
//             bs[i] = 1;
//         }
//     }

//     for (int i = 1; i <= N; i++) {
//         dp[i] = arr[i] + arr[i + 1] + arr[i + 2];
//     }

//     for (int i = 1; i <= N;) {
//         if (bs[i] && bs[i + 1] && bs[i + 2]) {
//             ans += 2 * dp[i];
//             i += 3; 
//         } else if (dp[i] > 0 && dp[i] > dp[i + 1] && dp[i] > dp[i + 2]) {
//             ans += 2 * dp[i];
//             i += 3; 
//         } else {
//             ans += arr[i];
//             i++;
//         }
//     }

//     cout << ans;
// }

