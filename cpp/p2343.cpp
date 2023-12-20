#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int N, M, sum=0, ans = 1e9;
int a[100002] = {0};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    int mx = 0;
    for (int i = 1; i <= N;i++){
        cin >> a[i];
        sum += a[i];
        mx = max(mx, a[i]);
    }
    int l=mx, r = sum;
    while(l<=r){
        int mid = (l + r) / 2;
        int cnt = 1, tmp = 0;
        for (int i = 1; i <= N;i++){
            if(tmp+a[i]>mid){
                cnt++;
                tmp = 0;
            }
            tmp += a[i];
        }
        if(cnt<=M){
            ans = min(ans, mid);
            r = mid - 1;
        }
        else{
            l = mid + 1;
        } 
    }
    cout << ans;
    return 0;
}