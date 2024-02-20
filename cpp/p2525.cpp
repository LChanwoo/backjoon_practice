#include<iostream>
using namespace std;

int main(){
    int A, B, C;
    cin >> A >> B >> C;
    B += C;
    A += B/60;
    B %= 60;
    A %= 24;
    cout << A << " " << B;
    return 0;
}