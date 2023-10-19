#include <iostream>

using namespace std;

int main(){
    int N,B,C;
    cin >> N;
    int A[N+1];
    for(int i=0;i<N;i++){
        int tester;
        cin >> tester;
        A[i] = tester;
    }
    cin >> B >> C;
    long count = N;
    for(int i=0;i < N;i++){
        A[i] -=B;
        if(A[i]<=0)continue;
        A[i]%C==0 ? count+=A[i]/C : count+=A[i]/C+1;
    }
    cout  << count;
    return 0;
}