#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    int two=0, five=0;
    while(n>0){
        two += n / 2;
        five += n / 5;
        n /= 2;
        n /= 5;
    }
    cout << min(two, five);
    return 0;
}