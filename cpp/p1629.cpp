#include<iostream>
using namespace std;

int A,B,C;
long long solve(int A, int B){
    if (B == 1)
        return A % C;
    long long ret = solve(A, B / 2);
    ret = (ret * ret) % C;
    if(B%2==1){
        ret = (ret * A) % C;
    }
    return ret;
}

int main(){
    cin >> A >> B >> C;
    cout << solve(A, B);
    return 0;
}