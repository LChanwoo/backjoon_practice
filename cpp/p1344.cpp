#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;

double dp[19][19][19];
double a, b;
bool isPrime[19];

double go(int idx, int x, int y){
    if(idx == 18) return isPrime[x] || isPrime[y] ? 1 : 0;
    double &ret = dp[idx][x][y];
    if(ret >= -1) return ret;
    ret = 0;
    ret += (1 - a) * (1 - b) * go(idx + 1, x, y);
    ret += a * (1 - b) * go(idx + 1, x + 1, y);
    ret += (1 - a) * b * go(idx + 1, x, y + 1);
    ret += a * b * go(idx + 1, x + 1, y + 1);
    return ret;
}

void setPrime(){
    isPrime[2] = true;
    isPrime[3] = true;
    isPrime[5] = true;
    isPrime[7] = true;
    isPrime[11] = true;
    isPrime[13] = true;
    isPrime[17] = true;
    return;
}

int main(){
    cin >> a >> b;
    a /= 100;
    b /= 100;
    memset(dp, -1, sizeof(dp));
    setPrime();
    cout << fixed;
    cout.precision(10);
    cout << go(0, 0, 0) << '\n';
    return 0;
}