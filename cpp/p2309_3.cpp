#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
    int a[9];
    int sum = 0;
    for (int i = 0; i < 9;i++){
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a + 9);
    
    do{
        int sum = 0;
        for (int i = 0; i < 7;i++){
            sum += a[i];
        }
        if(sum==100){
            for (int i = 0; i < 7;i++){
                cout << a[i] << '\n';
            }
            return 0;
        }
    }
    while(next_permutation(a, a + 9));
    return 0;
}