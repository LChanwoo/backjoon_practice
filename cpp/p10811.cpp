#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N, M ;
    cin >> N >> M;;
    vector<int> basket;
    for(int i = 0; i < N ; i++){
        basket.push_back(i+1);
    }
    for(int idx = 0; idx < M ; idx++ ){
        int i,j;
        cin >> i >> j;
        reverse(basket.begin()+i-1,basket.begin()+j);
    }
    for(int i=0;i<N;i++){
        cout << basket[i];
        if(i!=N-1)
        cout << " ";
    }

}
