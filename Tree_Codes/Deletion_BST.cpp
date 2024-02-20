#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;
    
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }

Node* deleteFromBST(Node* root, int value){
    // base case
    if(root == NULL){
        return root;
    }

    if(root-<data == value){
        // 0 child
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL
        } 

         // 1 child
         // left child
        if(root->left != NULL && root->right ==NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        // right child
        if(root->left == NULL && root->right != NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }
        
        // 2 child
        if(root->left != NULL && root->right != NULL){
            int minimum = minimumValue(root->right)->data;
            root->data = minimum;
            root->right = deleteFromBST(root->right, minimum);
            return root; 
        }




    }
    else if(root->data < value){
        // goes to right part nodes
        deleteFromBST(root->right,value);
        return root;
    }
    else{
        // goes to left part nodes
        deleteFromBST(root->left,value);
        return root;
    }
   
}

int main(){
    
    return 0;
}