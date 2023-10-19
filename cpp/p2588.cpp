#include <iostream>
#include <string>

using namespace std;

int main(){
    int A ;
    string B ;
    cin >> A >> B;
    for(int i =2; i>=0; i--){
        cout << A * (int)(B[i]-'0') << "\n";
    }
    cout << A * stoi(B);
    return 0;
}