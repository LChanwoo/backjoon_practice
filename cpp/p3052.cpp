#include <iostream>
#include <set>

using namespace std;

int main(){
    set<int> s;
    int e;
    for(int i=0;i<10;i++){
        cin >> e; 
        s.insert(e%42);
    }
    cout << s.size();
    return 0;
}