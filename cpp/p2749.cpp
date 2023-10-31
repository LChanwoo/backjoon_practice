#include<iostream>
#include<vector>
using namespace std;

int v[1000001];
long long fibonaci(long long n){
    if(n==0) return 0;
    if(v[n]!=0) return v[n];

    return v[n] = (v[n-1]%1000000 + v[n-2]%1000000);
}


int main(){
    long long n;
    cin >> n;
    n=n%1000000;
    v[0] = 0;
    v[1] = 1;
    cout << fibonaci(n);
    return 0;
}