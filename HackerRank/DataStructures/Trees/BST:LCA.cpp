/*
Node is defined as

typedef struct node
{
   int data;
   node *left;
   node *right;
}node;

*/


node *lca(node *root, int v1,int v2)
{
    int temp =root->data;
    if(!root){
        return root;
    }

    if((temp>=v1 && temp<=v2 )|| (temp>=v2 && temp<=v1)){
        return root;
    }

    if(v1>temp && v2>temp){
        return lca(root->right, v1, v2);
    }else{
        return lca(root->left, v1, v2);
    }

}
