#include<iostream>
using namespace std;

int t,n;
int main(){
    cin >> t;
    int a[11];
    a[1] = 1;
    a[2] = 2;
    a[3] = 4;
    for(int i=4;i<11;i++){
        a[i] = a[i-1] + a[i-2] + a[i-3];
    }
    for(int i=0;i<t;i++){
        cin >> n;
        cout << a[n] << '\n';
    }
    return 0;
}