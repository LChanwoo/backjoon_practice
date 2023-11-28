#include<iostream>
#include<vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin >> n >> m;
    long long pre_sum[10001]={0};
    for(int i = 1; i <= n;i++){
        cin >> pre_sum[i];
        pre_sum[i] += pre_sum[i - 1];
    }
    long long cnt = 0;
    for(int i = 1; i <= n;i++){
        for(int j = i; j <= n;j++){
            if(pre_sum[j]-pre_sum[i-1]==m)
                cnt++;
        }
    }
    cout << cnt;

    return 0;
}