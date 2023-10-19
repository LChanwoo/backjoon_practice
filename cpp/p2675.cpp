#include <iostream>
#include <string>
#include <vector>
#include <utility>
using namespace std;

int main(){
    int T;
    cin >> T;
    vector<pair<int,string>> vec;
    for(int i=0; i< T;i++){
        int R;
        string S;
        cin >> R >> S;
        vec.push_back(make_pair(R,S));
    }
    for(int i=0;i<vec.size();i++){
        string S = vec.at(i).second;
        for(int j=0; j<S.length();j++){
            for(int k=0; k<vec.at(i).first;k++){
                cout << S[j];
            }
        }
        cout << "\n";
    }

    return 0;
}