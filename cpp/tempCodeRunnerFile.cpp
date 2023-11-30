out<<root<<'\n';
        inorder(node[root][0]);
        visited[root] = true;
        if(node[root].size()==2){
            inorder(node[root][1]);
        }