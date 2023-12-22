#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int main(){
    while(true){
        int n, c;
        double m, p;
        cin >> n >> m;
        if(n==0) return 0;
        int M = m * 100;
        int dp[100001] = {0};
        memset(dp, 0, sizeof(dp));
        for (int i = 0; i < n;i++){
            cin >> c >> p;
            int price = p * 1000 / 10;
            for (int j = price;j<=M;j++){
                dp[j] = max(dp[j], dp[j - price] + c);
            }
        }
        cout << dp[M] << '\n';
    }
    return 0;
}