#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n+1);
        for (int i = 1; i <= n;i++){
            cin >> a[i];
            a[i] += a[i - 1];
        }
        int max = a[n];
        for (int i = 1; i <= n;i++){
            for (int j = i; j <= n;j++){
                if(max<a[j]-a[i-1]){
                    max = a[j] - a[i - 1];
                }
            }
        }
        cout << max << '\n';
    }
    return 0;
}