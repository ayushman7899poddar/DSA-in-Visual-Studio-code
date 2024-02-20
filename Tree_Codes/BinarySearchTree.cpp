#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
        int data;
        node* left;
        node* right;

    node(int data){
        this->data = data;
        this->left = left;
        this->right = right;
    }
};

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root); 
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
       // cout<<temp->data<<" ";
        q.pop();

        // make a seperator for print data of trees in the form of tree
        if(temp = NULL){ // previous level of tree completed
            cout<<endl;
        
            if(!q.empty()){  // queue still has some child nodes
                q.push(NULL);
            }
        }

    else
    {
        cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }

        if(temp->right){
            q.push(temp->right);
        }
    }

    }

}


node* insertToBST(node* &root, int data){
    // base case
    if(root == NULL){
        // create a node
        root = new node(data);
        return root;
    }
    if(data < root->data){
        // insert data into left part of root
        root->left = insertToBST(root->left,data);
    }
    else{
        // insert data into right part of node
        root->right = insertToBST(root->right , data);
    }
    return root;
}



void takeinput(node* & root){
    int data;
    cin>>data;

    while(data != -1){
        insertToBST(root,data);

       cin>>data;
    }
}

void preorder(node* root){
    // base case
    if(root == NULL){
        return;
    }
    cout<<root->data<<" "; 
    preorder(root->left);
    preorder(root->right);
}
int main(){

    node* root = NULL;

    cout<<"enter data to create BST"<<endl;
    takeinput(root);

    cout<<"Printing the BST "<<endl;
    levelOrderTraversal(root);

    cout<<"printing inorder"<<endl;
   cout<< preorder(root);
    return 0;
}