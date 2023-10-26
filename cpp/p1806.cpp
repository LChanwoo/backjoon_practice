#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int N,S;
    cin >> N >> S;
    vector<int> v(N);
    for(int i=0;i<N;i++){
        cin >> v[i];
    }
    int i = 0, j = 0;
    int sum = 0;
    int min = 100001;

    while( i<=j && j<=N){
        if(sum>=S){
            if(min>j-i){
                min = j-i;
            }else{
                sum -=v[i];
                i++;
            }
        }else{
            sum +=v[j];
            j++;
        }
    }
    if(i==0 && j>=N && sum<S){
        min = 0;
    }
    cout << min << endl;
    return 0;
}