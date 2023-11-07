#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    if(n==1 || n==3){
        cout << -1;
        return 0;
    }
    int sum = 0;
    sum+=n/5;
    n%=5;
    if(n==1 || n==3){
        sum--;
        n+=5;
    }else if(n==4){
        sum+=2;
        n-=5;
    }


    sum+=n/2;

    cout << sum;

    return 0;
}