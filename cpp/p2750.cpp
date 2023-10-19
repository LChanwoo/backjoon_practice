#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    int N;
    set<int> s;
    cin>>N;
    for(int i=0;i<N;i++){
        int tmp;
        cin >> tmp;
        s.insert(tmp);
    }
    vector<int> v(s.begin(),s.end());
    sort(v.begin(),v.end());
    for(int value : v){
        cout << value << "\n";
    }
    return 0;

}