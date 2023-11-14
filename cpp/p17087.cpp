#include<iostream>
#include<algorithm>
using namespace std;
int gcd(int a, int b){
    if(b == 0)
        return a;
    else
        return gcd(b, a%b);
}

int main(){
    int N, S;
    cin >> N >> S;
    int arr[N];
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    int diff[N];
    for(int i=0;i<N;i++){
        diff[i] = abs(S - arr[i]);
    }
    int ans = diff[0];
    for(int i=1;i<N;i++){
        ans = gcd(ans, diff[i]);
    }
    cout << ans;
    
}