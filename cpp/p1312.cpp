#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    int A,B,N;
    cin >> A >> B >> N;
    int result =0;
    for(int i=0; i <= N;i++){
        result = A/B;
        A%=B;
        A*=10;
    }
    cout << result;
    return 0; 
}