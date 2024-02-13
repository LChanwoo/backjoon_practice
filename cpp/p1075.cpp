#include<iostream>
using namespace std;

int main(){
    int N, F;
    cin >> N >> F;
    N = N / 100 * 100;
    for (int i = 0; i < 100; i++){
        if((N+i)%F==0){
            if(i<10){
                cout << "0" << i;
            }else{
                cout << i;
            }
            break;
        }
    }
    return 0;
}