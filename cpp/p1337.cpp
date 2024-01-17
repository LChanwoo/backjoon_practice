#include<iostream>
#include<algorithm>
using namespace std;

int n;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    int a[n];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    sort(a, a + n);
    int ans = 0;
    for (int i = 0; i < n;i++){
        int cnt = 0;
        for (int j = i; j < n;j++){
            if(a[j]<=a[i]+4)
                cnt++;
            else
                break;
        }
        ans = max(ans, cnt);
    }
    cout << 5 - ans;
}