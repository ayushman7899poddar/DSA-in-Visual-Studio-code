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

int height(Node* root)
{
    if(root == NULL){
        return 0;
    }
    return max(height(root->left), height(root->right)) + 1;
}

bool isBalncedTree(Node* root)
{
    if(root == NULL){
        return true;
    }
   if(isBalncedTree(root->left) == false){
    return false;
   }
   if(isBalncedTree(root->right) == false){
    return false;
   }

    int lh = height(root->left);
    int rh = height(root->right);

    if(abs(lh-rh) <= 1){
        return true;
    }
    else{
       return  false;
    }

}


int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    

    Node* root2 = new Node(1);
    root2->left = new Node(2);
    root2->left->left = new Node(3);

    if(isBalncedTree(root2))
    {
    cout<<"tree is balnced";
    }
    else{
        cout<<"tree is unbalnced";
    }

    return 0;
}