#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }

};

int height(Node* root){
    if(root == NULL){
        return 0;
    }
    return max(height(root->left), height(root->right)) + 1;
}


int diameter(Node* root){
    // base case
    if(root == NULL){
        return 0;
    }
    int lheight = height(root->left);
    int rheight = height(root->right);
    int currdiameter = lheight + rheight + 1;

    int ldiameter = diameter(root->left);
    int rdiameter = diameter(root->right);
    return max(currdiameter, max(ldiameter,rdiameter));
}

int main(){

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

        

    cout<<diameter(root);
    return 0;
}