#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int x, shortest, cnt = 1, sum = 64;
int main(){
    cin >> x;
    while (sum != x){
        shortest = (sum & -sum);
        shortest >>= 1;
        if (sum > x) sum -= shortest;
        else{
            sum += shortest;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}