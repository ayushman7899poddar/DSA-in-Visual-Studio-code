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

// void InsertAtHead(Node* & head,int d){

//     // create new node
//     Node* temp = new Node(d);
//     temp->next = head;
//     head = temp;
// }

void InsertAtTail(Node* & tail,int d){
    // create new node
    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail-> next;
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
    Node* node1 = new Node(10);

    //head pointed to node 1
    Node* head = node1;
    Node* tail = node1;
    print(tail);

    InsertAtTail(tail,20);
    print(head);

    InsertAtTail(tail,25);
    print(head);

    InsertAtTail(tail,30);
    print(head);
    
    return 0;
}