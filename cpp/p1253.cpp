#include<iostream>
#include<algorithm>
using namespace std;

int N, ans=0;
int a[2001] = {0};
int main(){
    cin >> N;
    for (int i = 0; i < N;i++) cin >> a[i];
    sort(a, a + N);
    for (int i = 0; i < N;i++){
        int lo = 0, hi = N - 1;
        while(lo<hi){
            if(lo==i) lo++;
            if(hi==i) hi--;
            if(lo !=hi && a[lo]+a[hi]==a[i]){
                ans++;
                break;
            }
            else if(a[lo]+a[hi]<a[i])
                lo++;
            else
                hi--;
        }
    }
    cout << ans;
    return 0;
}