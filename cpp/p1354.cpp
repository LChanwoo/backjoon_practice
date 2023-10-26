#include <iostream>
#include <map>
using namespace std;

long long N,P,Q,X,Y;
map<long long,long long> m;
long long letsgo(long long n){
    if(n==0) return 1;
    long long tmp = m[n];
    if(tmp!=0) return tmp;
    long long npx = n/P-X >=0 ? n/P-X : 0;
    long long nqy = n/Q-Y >=0 ? n/Q-Y : 0;
    
    return m[n] = letsgo(npx)+ letsgo(nqy);

}
int main(){
    cin >> N >> P >> Q >> X >> Y;
    cout << letsgo(N) ;
    return 0;
}
