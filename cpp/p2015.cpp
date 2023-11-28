#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

map<long long, long long> m;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    m[0]=1; // [0,0] 아무것도 선택하지 않은 경우
    int n,k;
    cin >> n >> k;
    long long pre_sum[200001]={0};
    long long cnt = 0;
    for(int i = 1; i <= n;i++){
        cin >> pre_sum[i];
        pre_sum[i] += pre_sum[i - 1];
        if(m[pre_sum[i]-k]){
            cnt += m[pre_sum[i] - k];
        }
        m[pre_sum[i]]++;
    }

    cout << cnt;

    return 0;
}