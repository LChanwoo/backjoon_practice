#include <iostream>
#include <string>
using namespace std;

int main(){
    int maxCount = 100;
    char str [maxCount];
    while(cin.getline(str,101)){
        cout << str << '\n';
    }
    return 0;
}