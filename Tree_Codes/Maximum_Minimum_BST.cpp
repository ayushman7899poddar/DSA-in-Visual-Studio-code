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

}

Node* insertToBST(Node* root, int data){
    // base case
    if(root == NULL){
        // create a Node
        root = new Node(data);
        return root;
    }
    if(data < root->data){
        // insert data into left part of root
        root->left = insertToBST(root->left,data);
    }
    else{
        // insert data into right part of Node
        root->right = insertToBST(root->right , data);
    }
    return root;
}

void takeinput(Node* &root){
    int data;
    cin>>data;

    while(data != -1){
        insertToBST(root,data);

       cin>>data;
    }
}

Node* minValue(Node* root){
    Node* temp = root;

    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;

    if(!temp->left){
        return root;
    }
}

Node* maxValue(Node* root){
    Node* temp = root;
    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp;

    if(!temp->right){
        return root;
    }
}
int main(){
    Node* root = NULL;


    cout<<"enter data to create a BST"<<endl;
    takeinput(root);

    cout<<"maximum value is : "<<endl;
    cout<<maxValue(root)->data<<endl;

    cout<<"minimum value is : "<<endl;
    cout<<minValue(root)->data<<endl;

    return 0;
}