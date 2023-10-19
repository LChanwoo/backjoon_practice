#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> vec;
    int result = 0;
    for(int i=0;i<N;i++){
        int x;
        cin >> x;
        vec.push_back(x);
    }
    int v;
    cin >> v;
    for(int i=0;i<N;i++){
        if(vec[i]==v){
            result++;
        }
    }
    cout << result;
}