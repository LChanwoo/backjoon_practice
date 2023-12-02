#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n, i,idx=0;
int node[10001];
void postorder(int start, int end){
    if(start>=end)
        return;
    for (i = start + 1; i < end;i++){
        if(node[start]<node[i])
            break;
    }
    postorder(start + 1, i);
    postorder(i,end);
    cout << node[start] << '\n';
}


int main(){
    while (cin >> n)
    {
        node[idx++] = n;
    }
    postorder(0, idx);
    return 0;
}