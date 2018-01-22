/* Node is defined as :
typedef struct node
{
    int val;
    struct node* left;
    struct node* right;
    int ht;
} node; */
/* Node is defined as :
typedef struct node
{
    int val;
    struct node* left;
    struct node* right;
    int ht;
} node; */

int height(struct node *N)
{
    if (N == NULL)
        return -1;
    return N->ht;
}

int max(int a, int b)
{
    return (a > b)? a : b;
}

struct node* newNode(int key){
    struct node* root = new node();
    root->val = key;
    root->left = root->right = NULL;
    root->ht = 0;
    return (root);
}

struct node* rightRotate(node* y){
    struct node* x = y->left;
    struct node* t2= x->right;

    x->right = y;
    y->left = t2;

    y->ht = max(height(y->left), height(y->right)) + 1;
    x->ht = max(height(x->left), height(x->right)) + 1;

    return x;
}

struct node* leftRotate(node* x){
    struct node* y = x->right;
    struct node* t2 = y->left;
    y->left = x;
    x->right = t2;
    x->ht = max(height(x->left), height(x->right))+1;
    y->ht = max(height(y->left), height(y->right))+1;

    // Return new root
    return y;
}

int getBalance(struct node* n){
    if(!n)
        return 0;
    return height(n->left) - height(n->right);
}


node * insert(node * root,int key)
{
    if(!root){
        return newNode(key);
    }

    if(key < root->val)
        root->left = insert(root->left, key);
    else if (key > root->val)
        root->right = insert(root->right, key);
    else
        return root;

    root->ht = 1+ max(height(root->left), height(root->right));

    int balance = getBalance(root);

    if((balance > 1) && (key < root->left->val)){
        return rightRotate(root);
    }
    if((balance < -1) && ( key > root->right->val)){
        return leftRotate(root);
    }

    if((balance > 1) && ( key > root->left->val)){
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    if((balance < -1) && (key < root->right->val)){
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;


}
