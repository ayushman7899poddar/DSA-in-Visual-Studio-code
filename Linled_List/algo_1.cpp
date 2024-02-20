#include<iostream>
using namespace std;

// A CLASS TO CREATE A NODE

class Node{
    public:
        int data;
        Node* next;

};
// A FUNCTION TO PRINT THE GIVEN THE LINKED LIST STARTING FROM THE GIVEN NODE
void printList(Node* n){
    while(n !=NULL){
        cout<<n->data<<" ";
        n = n-> next;
    }
}

int main(){
    // CREATING NODES
    Node *head=NULL;
    Node *second = NULL;
    Node *third = NULL;
    Node *tail = NULL;

    // ALLOCATE FOUR NODES
    head = new Node();
    second =  new Node();
    third = new Node();
    tail = new Node();

    head -> data = 2;
    head -> next = second;
    second->data =3;
    second->next = third;
    third-> data=4;
    third->next = tail;
    tail->data = 5;
    tail-> next=NULL; 

    // PRINTING SINGLY LINKED LIST
    cout<<"created singly linked list "<<endl;
    printList(head);

    
    return 0;
}