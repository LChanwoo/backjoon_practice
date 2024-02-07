#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int T;
    cin >> T;
    int q, d, n, p;
    for (int i = 0; i < T;i++){
        cin >> q;
        d = q / 25;
        q %= 25;
        n = q / 10;
        q %= 10;
        p = q / 5;
        q %= 5;
        cout << d << ' ' << n << ' ' << p << ' ' << q << endl;
    }
    return 0;
}