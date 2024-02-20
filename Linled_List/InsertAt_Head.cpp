#include<iostream>
using namespace std;

class Node{

    public:
        int data;
        Node* next;
    // CONSTRUCTOR :
    Node(int data){
        this ->data = data;
        this ->next = NULL;
    }
};

void InsertAtHead(Node* & head,int d){

    // create new node
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void print(Node* &head){
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp-> next; 
    }
    cout<<endl;
}

int main(){
    
    // create a new node
    Node* node1 = new Node(15);
   // cout<<node1 ->data<<endl;
    //cout<<node1->next<<endl;

    //head pointed to node 1
    Node* head = node1;
    print(head);

    InsertAtHead(head,20);
    print(head);
    InsertAtHead(head,25);
    print(head);
    InsertAtHead(head,30);
    print(head);
    InsertAtHead(head,35);
    print(head);
    return 0;
}