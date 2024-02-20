#include<iostream>
using namespace std;


class Node {
    public:
        int data;
        Node* left;
        Node* right;
};

// helper function that allocates a new node with the given data and NULL left and right pointers
Node* createNode(int data){
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
}

// function prototype for preorder traversal
void preorderTraversal(Node* root){
    // base case 
    if(root == NULL){
        return;
    }
    // store data
    cout<<root->data<< " ";
    // goes to left subtree
    preorderTraversal(root->left);
    // goes to right subtree
    preorderTraversal(root->right);
}

// function for inorder traversal of the tree to store the node values in array in sorted order
void inorderTraversal(Node* root, vector<int>& arr){
    // base case
    if(root == NULL){
        return;
    }
    // goes to left subtree
    inorderTraversal(root->left,arr);
    // store root data
    arr.push_back(root->data);
    // goes to right subtree
    inorderTraversal(root->right,arr);
}

void BSTtoMinHeap(Node* root, vector<int> arr, int* i){
    // base case
    if(root == NULL){
        return ;
    }
    // first copy data at index i of arr to the node
    root->data = arr[++*i];
    // then goes to left subtree
    BSTtoMinHeap(root->left,arr,i);
    // now goes to right subtree
    BSTtoMinHeap(root->right,arr,i);

    
}

// utility function to convert the given BST to MIN HEAP
void convertToMinHeap(Node* root){
    // vector to store the data of al the nodes of BST
    vector<int> arr;
    int i = -1;

    // inorder traversal to populate 'arr'
    inorderTraversal(root,arr);

    // BST to min heap conversion
    BSTtoMinHeap(root,arr,&i);
}

int main(){
    
    // BST FORMATION

    node* root = createNode(4);
    root->left = createNode(2);
    root->right = createNode(6);

    root->left->left = createNode(1);
    root->left->right = createNode(3);

    root->right->left = createNode(5);
    root->right->right = createNode(7);

    convertToMinHeap(root);
    cout<<"preorder traversal : "<<endl;
    preorderTraversal(root);
    return 0;
}