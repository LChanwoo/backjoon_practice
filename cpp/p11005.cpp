#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int N,B;
    cin>>N>>B;
    vector<int> v;
    while(N>0){
        v.push_back(N%B);
        N/=B;
    }

    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        if(v[i]>=10) cout << (char)(v[i]+'A'-10) ;
        else cout<< v[i];
    }     
    return 0;
}