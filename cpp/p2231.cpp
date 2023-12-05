#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n, m=1;
    cin >> n;

    while(true){
        int sum = m;
        int temp = m;
        while(temp){
            sum += temp % 10;
            temp /= 10;
        }
        if(sum==n){
            cout << m << '\n';
            return 0;
        }
        if(m>n){
            cout << 0 << '\n';
            return 0;
        }
        m++;
    }
}