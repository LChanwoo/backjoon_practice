#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int solve(int A, int B, int C){
    if(B==1){
        return A % C;
    }
    if(B%2==1){
        return (solve(A, B / 2, C) * solve(A, B / 2, C) * A) % C;
    }
    else{
        return (solve(A, B / 2, C) * solve(A, B / 2, C)) % C;
    }
}

int main(){
    int A,B,C;
    cin >> A >> B >> C;
    int result = 1;
    result = solve(A, B, C);
    cout << result;
    return 0;
}