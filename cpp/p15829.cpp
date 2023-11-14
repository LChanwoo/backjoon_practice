#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    long long int arr[n];

    for(int i=0; i<n; i++){
        arr[i] = s[i] - 'a' + 1;
    }
    long long int result=0;
    for (int i = 0; i < n; i++)
    {
        long long int tmp = 1;
        for (int j = 0; j < i;j++){
            tmp *= 31;
            tmp %= 1234567891;
        }
        result += (long long int)(arr[i] *tmp) % 1234567891;
    }
    
    cout << result%1234567891;

}
