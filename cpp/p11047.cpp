#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int count = 0;
    for(int i=n-1;i>=0;i--){
        if(k == 0) break;
        if(arr[i] <= k){
            count += k/arr[i];
            k %= arr[i];
        }
    }
    cout << count;
}