#include<iostream>
#include<algorithm>
using namespace std;

char c[1000001];
int zero = 0;
int one = 0;
int main(){
    cin >> c;
    for (int i = 0; c[i] != '\0';i++){
        if(c[i]=='0'){
            if(c[i+1]=='1'){
                zero++;
                if(one ==0) one++;
            }
        }
        else{
            if(c[i+1]=='0'){
                one++;
                if(zero==0) zero++;
            }
        }
    }
    cout << min(zero, one) << '\n';
    return 0;
}