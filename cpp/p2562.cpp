#include <iostream>

using namespace std;

int main(){
    int X=0, max=0,idx=0;
    for(int i=0;i<9;i++){
        cin >> X;
        if(max<X){
            max = X;
            idx = i+1;
        } 
    }
    cout << max << "\n" << idx;
}