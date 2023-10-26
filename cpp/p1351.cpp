#include <iostream>
#include <map>
using namespace std;

long long N,P,Q;
map<long long,long long> m;
long long letsgo(long long n){
    if(n==0) return 1;
    long long tmp = m[n];
    if(tmp!=0) return tmp;
    return m[n] = letsgo(n/P)+ letsgo(n/Q);

}
int main(){
    cin >> N >> P >> Q;
    cout << letsgo(N) ;
    return 0;
}
