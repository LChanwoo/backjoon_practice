#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    while(cin>>n){
        int a = 1;
        int cnt = 1;
        while(a%n!=0){
            a = (a*10+1)%n;
            cout <<"a : " <<a << '\n';
            cnt++;
        }
        cout << cnt << '\n';
    }
    return 0;
}