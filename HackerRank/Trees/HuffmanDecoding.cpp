void decode_huff(node * curr,string s)
{
    string ans ="";
    node* root =curr;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='0')
            root=root->left;
        else
            root=root->right;

        if(root->left==NULL && root->right==NULL){
            ans+=root->data;
            root=curr;

        }
    }
    cout<<ans<<endl;

}
