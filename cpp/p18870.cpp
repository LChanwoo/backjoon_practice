#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main(){
    int N,cnt=0;
    cin >>N;
    vector<int> X(N),Y;
    map<int,int> m;

    for(int i=0;i<N;i++){
        cin >> X[i];
    }
    Y=X;
    sort(X.begin(),X.end());
    for(int i=0;i<N;i++){
        if(m.find(X[i])!=m.end()){
            X[i]=m[X[i]];
        }else{
            m.insert({X[i],cnt});
            X[i] =cnt++;
        }
    }
    for(int i=0;i<N;i++){
        cout<< m[Y[i]] << " ";
    }
    return 0;
    
}