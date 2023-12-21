#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long s,c,mx=0,len[1000001],sum,ret;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> s >> c;
    for (int i = 0; i < s;i++){
        cin >> len[i];
        sum += len[i];
        mx = max(mx, len[i]);
    }
    long long l=1, r = mx ;
    while(l<=r){
        long long mid = (l + r) / 2;
        long long cnt = 0;
        for (int i = 0; i < s;i++){
            cnt += len[i] / mid;
        }
        if(cnt>=c){
            l = mid + 1;
            ret = mid;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << sum-ret*c;
    return 0;
}