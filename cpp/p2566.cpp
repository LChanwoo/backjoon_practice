#include<iostream>
using namespace std;

int main(){
    int max=0;
    int maxI=0;
    int maxJ=0;
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            int tmp;
            cin >> tmp;
            if(tmp>max){
                max = tmp;
                maxI=i+1;
                maxJ=j+1;
            }
        }
    }
    cout << max << "\n";
    cout << maxI << " " << maxJ;
    return 0;
}