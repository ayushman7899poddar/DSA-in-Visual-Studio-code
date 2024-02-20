#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node* left;
        node* right;
};

node* newnode(int data){
    node* temp = new node();
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

// preorder traversal without stack and recursion
void morrisTraversalPreorder(node* root){
    while(root){
        // if left child is null , print the current node data, move to right child
        if(root->left == NULL){
            cout<<root->data<<" ";
            root = root->right;
        }
        else{
            // find inorder predecessor
            node* current = root->left;
            while(current->right && current->right != root){
                current = current->right;
            }
            if(current->right == root)
            {
                current->right = NULL;
                root = root->right;
            }
            // if right child does not print to this node, then print this node and make right child point to this node
            else{
                cout<<root->data<<" ";
                current->right = root;
                root = root->left;

            }
        }
    }
}
// function for standard preorder traversal
void preorder(node* root){
    if(root){
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

int main(){
    
    node* root = NULL;

    root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(3);

    root->left->left = newnode(4);
    root->left->right = newnode(5);

    root->right->left = newnode(6);
    root->right->right = newnode(7);

    root->left->left->left = newnode(8);
    root->left->left->right = newnode(9);

    root->left->right->left = newnode(10);
    root->left->right->right = newnode(11);

    morrisTraversalPreorder(root);
    cout<<endl;
    preorder(root);
    return 0;
}