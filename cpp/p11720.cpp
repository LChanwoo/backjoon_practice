#include <iostream>
#include <string>
using namespace std;

int main(){
    int N;
    string X;
    int sum = 0;
    cin >> N >> X;
    for(int i=0;i<N;i++){
        sum += (X[i]-'0');
    }
    cout << sum;
    return 0;
}