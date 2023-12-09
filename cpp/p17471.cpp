#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n,m,k;
int total = 0;
int population[11];
vector<vector<int>> v;



int main(){
    cin >> n;
    for (int i = 0; i < n;i++){
        cin >> population[i];
        total += population[i];
    }
    for (int i = 0; i < n;i++){
        cin >> m;
        vector<int> temp;
        for (int j = 0; j < m;j++){
            cin >> k;
            temp.push_back(k);
        }
        v.push_back(temp);
    }
}