#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int selfnum[10001] = {1,3,5,7,9,20,31,42,53,64};

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    for (int i = 1; i <= 10000;i++){
        int sum = i;
        int temp = i;
        while(temp){
            sum += temp % 10;
            temp /= 10;
        }
        selfnum[sum] = 1;
    }
    for (int i = 1; i <= 9;i=i+2){
        cout << i << '\n';
    }
        for (int i = 1; i <= 10000; i++)
        {
            if (selfnum[i] == 0)
                cout << i << '\n';
        }
    return 0;   
}
