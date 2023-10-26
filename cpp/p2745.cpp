#include<iostream>
#include<string>
#include <cmath>
using namespace std;
int main(){
    int B, res=0;
    string N;
    cin >> N>>B;
    
    for(int i=0;i<N.length();i++){
        int tmp ;
        if(N[i]>='A' && N[i]<='Z'){
            tmp = N[i] -'A'+10; 
        }else{
            tmp = N[i] - '0';
        }
        cout << tmp << endl;
        res += tmp * pow( B, N.length()-1-i);
    }
    cout << res;
}