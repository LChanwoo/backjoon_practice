#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    // nCm = n! / (n-m)!m!
    // n! = 2^a * 5^b * (2^a * 5^b) * (2^a * 5^b) * ... * (2^a * 5^b)
    // (n-m)! = 2^c * 5^d * (2^c * 5^d) * (2^c * 5^d) * ... * (2^c * 5^d)
    // m! = 2^e * 5^f * (2^e * 5^f) * (2^e * 5^f) * ... * (2^e * 5^f)
    // nCm = 2^(a-c-e) * 5^(b-d-f) * (2^(a-c-e) * 5^(b-d-f)) * (2^(a-c-e) * 5^(b-d-f)) * ... * (2^(a-c-e) * 5^(b-d-f))
    // 2의 개수는 5의 개수보다 항상 많으므로 5의 개수만 세면 된다.
    // 5의 개수는 n!에 있는 5의 개수에서 (n-m)!에 있는 5의 개수와 m!에 있는 5의 개수를 뺀 것과 같다.
    int two = 0;
    int five = 0;

    // n!에 있는 2의 개수
    for(long long i = 2; i <= n; i *= 2){
        two += n / i;
        cout << two << endl;    
    }
    // (n-m)!에 있는 2의 개수
    for(long long i = 2; i <= n-m; i *= 2){
        two -= (n-m) / i;
        cout << two << endl;
    }
    // m!에 있는 2의 개수
    for(long long i = 2; i <= m; i *= 2){
        two -= m / i;
        cout << two << endl;
    }

    // n!에 있는 5의 개수
    for(long long i = 5; i <= n; i *= 5){
        five += n / i;
    }
    // (n-m)!에 있는 5의 개수
    for(long long i = 5; i <= n-m; i *= 5){
        five -= (n-m) / i;
    }
    // m!에 있는 5의 개수
    for(long long i = 5; i <= m; i *= 5){
        five -= m / i;
    }

    // nCm = 2^(a-c-e) * 5^(b-d-f) * (2^(a-c-e) * 5^(b-d-f)) * (2^(a-c-e) * 5^(b-d-f)) * ... * (2^(a-c-e) * 5^(b-d-f))
    // 2의 개수와 5의 개수 중 더 작은 것이 nCm의 끝자리 0의 개수이다.
    cout << min(two, five);

}