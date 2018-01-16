#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *left, *right;
};

struct node* newNode(int data){
    struct node* temp = new node();
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

void printInOrder(struct node* root){
    if(!root)
    return;
    printInOrder(root->left);
    cout<<root->data<<" ";
    printInOrder(root->right);
}

void swap(int k,struct node* root,int level)
{
    if(root!=NULL)
    {
        if(level%k == 0)
        {
            struct node* t0 = root->left;
            root->left = root->right;
            root->right = t0;
            t0 = NULL;
        }
        swap(k,root->left,level+1);
        cout<<root->data<<" ";
        swap(k,root->right,level+1);
    }
}

int main() {
    struct node* root = newNode(1);
    queue<struct node*> q;
    q.push(root);
    int number; cin>>number;

    while(!q.empty()){
        struct node* temp = q.front();
        q.pop();
        int a, b;
        cin>>a>>b;
        if(a!=-1){
            temp->left = newNode(a);
            q.push(temp->left);

        }
        if(b!=-1){
            temp->right = newNode(b);
            q.push(temp->right);
        }
    }
    // printInOrder(root);

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        swap(n, root, 0);
        cout<<endl;
    }


    return 0;
}
