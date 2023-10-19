#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    int A,B,V;
    cin >> A>>B>>V;
    if(V==A) cout << 1;
    else if((V-B)%(A-B)!=0) cout << (V-B)/(A-B)+1;
    else cout << (V-B)/(A-B);
    return 0;
}