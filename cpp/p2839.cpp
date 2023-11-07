#include<iostream>

using namespace std;

int main(){
    int n,sum=0;
    cin >> n;

    if(n==1 || n==2 || n==4 || n==7){
        cout << -1;
        return 0;
    }

    sum = n/5;
    n%=5;
    if(n==1 || n==4){
        sum--;
        n+=5;
    }else if(n==2){
        sum-=2;
        n+=10;
    }

    sum+=n/3;

    cout << sum;


    return 0;
}