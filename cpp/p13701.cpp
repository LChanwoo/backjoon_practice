#include<iostream>
#include<bitset>

using namespace std;

bitset<33554433> bs;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
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