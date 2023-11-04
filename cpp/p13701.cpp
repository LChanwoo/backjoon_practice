#include<iostream>
#include<bitset>

using namespace std;

bitset<33445533> bs;

int main(){
    int n;
    while(1){
        cin >> n;
        if(cin.eof()){
            break;
        }
        if(bs[n]==0){
            cout << n << " ";
            bs[n] = 1;
        }
    }
}