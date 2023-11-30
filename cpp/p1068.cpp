#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> node[51];

bool visited[51];
int n,root, del,cnt=0;

void inorder(int p){
    if(!visited[p]){
        visited[p] = true;
        if(p==del)
            return;
        if(node[p].size()==0){
            cnt++;
            visited[p] = true;
            return;
        }
        if(node[p].size()==1&&node[p][0]==del){
            cnt++;
            visited[p] = true;
            return;
        }
        for(int i:node[p]){
            inorder(i);
        }
    }
    return;
}

int main(){
    cin >> n;
    for (int i = 0; i < n;i++){
        int parent;
        cin >> parent;
        if(parent==-1){
            root = i;
            continue;
        }
        node[parent].push_back(i);
    }   
    cin >> del;
    inorder(root);
    cout << cnt;
}