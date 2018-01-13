void topView(Node* root) {
    if(!root){
        return;
    }

    int hd = 0;
    map<int, int> m;
    queue<pair<Node*, int> > q;
    q.push(make_pair(root, hd));

    while(!q.empty()){
        pair<Node*, int> p = q.front();
        Node *n= p.first;
        int val = p.second;
        q.pop();

        if(m.find(val)== m.end()){
            m[val]= n->data;
        }

        if(!n->left){
            q.push(make_pair(n->left, hd-1));
        }

        if(!n->right){
            q.push(make_pair(n->right, hd+1));
        }
    }

    for(auto it=m.begin(); it!=m.end(); it++){
        cout<<it->second<<" ";
    }

}
