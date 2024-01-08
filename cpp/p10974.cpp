#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n, arr[8];
vector<vector<int>> ans;
void backtracking(int index, int now){
    if(index == n){
        vector<int> temp;
        for(int i=0;i<n;i++){
            temp.push_back(arr[i]);
        }
        ans.push_back(temp);
        return;
    }
    for (int i = index;i<n;i++){
        swap(arr[i],arr[index]);
        backtracking(index + 1, i);
        swap(arr[i],arr[index]);
    }   
}

int main(){
    cin >> n;
    for(int i=0;i<n;i++) arr[i] = i+1;
    backtracking(0, 1);
    sort(ans.begin(), ans.end());
    for(auto v : ans){
        for(int i : v){
            cout << i << " ";
        }
        cout << '\n';
    }
    return 0;

}