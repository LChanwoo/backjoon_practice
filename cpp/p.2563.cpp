#include<iostream>
using namespace std;

int main(){
    int arr[101][101]={0}, cnt=0 ;
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        int x,y;
        cin >> x >> y;
        for(int j=y;j<y+10;j++){
            for(int k=x;k<x+10;k++){
                if(arr[j][k]==0){
                    arr[j][k]=1;
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}