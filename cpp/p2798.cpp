#include<iostream>

using namespace std;

int main(){
    int N,M;
    int max = INT32_MIN;
    int cards[101]={0};
    cin >> N >> M;
    for(int i=0;i<N;i++){
        cin >> cards[i];
    }
    int i=0, j=0, k=0;
    for(int i=0; i<N;i++){
        for(int j=i+1; j<=N;j++){
            for(int k=j+1; k<N;k++){
                int tmp = cards[i]+cards[j]+cards[k];
                if(tmp==M){
                    cout << M;
                    return 0;
                }else if( tmp > max && tmp< M ){
                    max=tmp;
                }else{
                    continue;
                }    
            }
        }   
    }
    cout << max;
    return 0;
}