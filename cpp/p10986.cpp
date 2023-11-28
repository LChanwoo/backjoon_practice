#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

map<long long, long long> mp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    mp[0]=1;
    int n,m;
    cin >> n >> m;
    long long pre_sum[1000001]={0};
    long long cnt = 0;
    for(int i = 1; i <= n;i++){
        cin >> pre_sum[i];
        pre_sum[i] += pre_sum[i - 1];
        if(mp[pre_sum[i]%m]){
            cnt += mp[pre_sum[i] % m];
        }
        mp[pre_sum[i]%m]++;
    }

    cout << cnt;

    return 0;
}