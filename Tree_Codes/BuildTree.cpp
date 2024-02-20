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

int search(int inorder[], int start, int end, int current){
    for(int i=start; i<=end; i++){
        if(inorder[i] == current){
            return i;
        }
    }
    return -1;
}

Node* buildTree(int preorder[], int inorder[], int start, int end){
    static int index = 0;
    if(start > end){
        return NULL;
    }
    int current = preorder [index];
    index++;
    Node* node = new Node(current);
    if(start == end){
        return node;
    }
    int position = search(inorder, start, end,current);
    node->left = buildTree(preorder, inorder,start,position-1);
    node->right = buildTree(preorder, inorder,position+1, end);

    return node;
}

void inorderPrint(Node* root){
    if(root == NULL){
        return;
    }
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
}

int main()
{
    int preorder[] = {1,2,4,3,5};
    int inorder[] = {4,2,1,5,3};

    // build tree
    Node* root = buildTree(preorder, inorder,0,4);
    inorderPrint(root);
   

    return 0;
}