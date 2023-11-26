#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int a[1299710] = {0};
int cnt = 0;
int main()
{
    int t;
    cin >> t;
    for (int i = 2; i < 1299710;i++){
        if(a[i]==0){
            for (int j = i * 2; j < 1299710;j+=i){
                a[j] = 1;
            }
        }
    }
    for (int i = 0; i < t;i++){
        int n;
        cin >> n;
        if(a[n]==0){
            cout << 0 << '\n';
            continue;
        }
        int left = n;
        int right = n;
        while(a[left]==1){
            left--;
        }
        while(a[right]==1){
            right++;
        }
        cout << right - left << '\n';
    }
    return 0;
}