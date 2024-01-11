#include<iostream>
#include<algorithm>
using namespace std;
int n, sum=0, ret=0, hi=1, lo=1;
int main(){
    cin >> n;
    while (1)
    {
        if(sum>=n) sum -= lo++;
        else if(hi==n+1) break;
        else sum += hi++;
        if(sum==n) ret++;
    }
    cout << ret;
}
