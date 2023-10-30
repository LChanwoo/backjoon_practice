#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    int div = 0;
    long long n;
    cin >> n;
    for(int i=2 ; i<=sqrt(n) ; i++){
        if(n%i==0){
            div++;
            if(div>1){
                break;
            }
            n /= i;
            i--;
        }
    }
    if(div==1){
           cout << "cubelover";
    }else{
        cout << "koosaga";
    }
}