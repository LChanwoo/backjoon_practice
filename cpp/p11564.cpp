#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long long k,a,b;
    cin >> k >> a >> b;
    long long result = 0; 
    if(a<=0 && b>=0){
        result = abs(a)/k +abs(b)/k +1;
    }else{
        if( a<0 && b<0 ) swap(a,b);

        result += abs(b)/k-abs(a)/k;
        
        if(abs(a)%k==0) result++;
    }
    cout << result << endl;
    return 0;
}