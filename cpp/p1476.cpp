#include<iostream>
using namespace std;
int main(){
    int E,S,M;
    cin >> E>>S>>M;
    int e=1,s=1,m =1;
    int result = 1;
    while(!(E ==e && S==s && M==m)){
        e++;
        if(e>15) e=1;
        s++;
        if(s>28) s=1;
        m++;
        if(m>19) m=1;
        result++;
    }
    cout << result;

}