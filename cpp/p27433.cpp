#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n;

long long int factorial(int n){
    if(n==0)
        return 1;
    return n * factorial(n - 1);
}

int main(){
    cin >> n;
    cout << factorial(n) << '\n';
    return 0;
}