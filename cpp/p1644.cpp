#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// 소수의 개수가 400만개를 넘지 않으므로
// 에라토스테네스의 체를 이용해 소수를 구한다.
bool sosu[4000001];
// a는 소수들의 집합
// p는 소수의 개수
// lo, hi는 투포인터
// ret은 답
// sum은 lo~hi까지의 합
int n, a[2000001], p, lo, hi, ret, sum;

int main(){
    cin >> n;
    for(int i=2;i<=n;i++){
        if(sosu[i]) continue;
        for(int j=i*2;j<=n;j+=i){
            sosu[j] = true;
        }
    }
    for(int i=2;i<=n;i++){
        if(!sosu[i]) a[p++] = i;
    }
    while(1){
        if(sum>=n) sum -= a[lo++];
        else if(hi==p) break;
        else sum += a[hi++];
        if(sum==n) ret++;
    }
    cout << ret;
}
