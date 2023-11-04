#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;

int one_cnt= 0;
int zero_cnt = 0;

int fibonaccis[41]={0,1};
vector<pair<int,int>> result;
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else if(fibonaccis[n]!=0){
        return fibonaccis[n];
    } else {
        return fibonaccis[n] = fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(){
    int n, num;
    cin >> n;
    fibonacci(41);
    for(int i=0;i<n;i++){
        cin >> num;
        if(num==0) result.push_back(make_pair(1,0));
        else result.push_back(make_pair(fibonaccis[num-1],fibonaccis[num]));
    }
    for(int i=0;i<n;i++){
        cout << result[i].first << ' ' << result[i].second << '\n';
    }

    return 0;
}