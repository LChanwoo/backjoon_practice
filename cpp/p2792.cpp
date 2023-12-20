#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long N, M, ans=1e10;
long long a[300001] = {0};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> M;
    long long l = 1, r = 0;
    for (int i = 0;i<M;i++){
        cin >> a[i];
        r = max(r, a[i]);
    }

    while(l<=r){
        long long mid = (l + r) / 2;
        long long sum = 0;
        for (int i = 0; i < M;i++){
            sum += a[i] / mid;
            if(a[i]%mid) sum++;
        }
        if(N>=sum){
            ans = min(ans,mid);
            r = mid - 1;
        }
        else l = mid + 1;
    }
    cout << ans;

}