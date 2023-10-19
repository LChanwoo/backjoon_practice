#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int N, M;
    cin >> N >> M;
    vector<vector<int>> A;
    vector<vector<int>> B;
    for(int i=0; i<N;i++){
        vector<int> tmpVec ;
        for(int j=0;j<M;j++){
            int tmp ;
            cin >> tmp;
            tmpVec.push_back(tmp);
        }
        A.push_back(tmpVec);
    }
    for(int i=0; i<N;i++){
        vector<int> tmpVec ;
        for(int j=0;j<M;j++){
            int tmp ;
            cin >> tmp;
            tmpVec.push_back(tmp);
        }
        B.push_back(tmpVec);
    }
    for(int i=0; i<N;i++){
        int tmpArr[N];
        for(int j=0;j<M;j++){
            int tmp = A[i][j]+B[i][j];
            cout << tmp <<" ";
        }
        cout << "\n";
    }
    return 0;
}