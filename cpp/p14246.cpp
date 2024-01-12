#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n, k;
long long a[100001], ans;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n;i++) cin >> a[i];
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        long long sum = 0;
        for (int j = i; j < n;j++){
            sum += a[j];
            if(sum>k) ans++;
        }
    }
    cout << ans;
}