#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int N, K;
    int a[100001] = {0};
    int sum[100001] = {0};
    int max = -1000000000;
    cin >> N >> K;
    for (int i = 0; i < K;i++){
        cin >> a[i];
        sum[i] = sum[i - 1] + a[i];
    }
    max = sum[K - 1];
    for (int i = K; i < N;i++){
        cin >> a[i];
        sum[i] = sum[i - 1] + a[i];
        if(sum[i]-sum[i-K]>max)
            max = sum[i] - sum[i - K];
    }
    cout << max;
    return 0;
}