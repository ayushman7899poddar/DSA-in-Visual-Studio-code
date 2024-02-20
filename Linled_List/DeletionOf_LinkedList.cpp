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

    // DESTRUCTOR :
    ~Node(){
    int value = this -> data;
    // memory free
    if(this ->next != NULL){
        delete next;
        this-> next= NULL;
    }
    cout<<"memory is free for node with data "<<value<<endl;
}
};

void InsertAtHead(Node* & head,int d){

    // create new node
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}
void InsertAtTail(Node* & tail,int d){
    // create new node
    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail-> next;
}

void InsertAtPosition(Node* &head,int position, int d){


        if(position==1){
            InsertAtHead(head,d);
            return;
        }

        Node* temp = head;
        int cnt =1;

        while(cnt < position-1){
            temp= temp->next;
            cnt++;
        }

    // inserting at last position
    // if(temp->next == NULL){
    //     InsertAtTail(tail,d);
    //     return;
    // }
    // creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp ->next;
    temp -> next = nodeToInsert;
}

void print(Node* &head){
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp-> next; 
    }
    cout<<endl;
}

void deleteNode(int position, Node* &head){

    // deleting first or start node
    if(position == 1){
        Node* temp = head;
        head = head -> next;
        // memory free is being starts
        temp -> next = NULL;
        delete temp;
    }
    else{
        // deleting any middle or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt<= position){
            prev = curr;
            curr = curr -> next;
            cnt++; 
        }

        prev -> next = curr ->next;
        curr -> next = NULL;
        delete curr;

    }
}

int main(){
    
    // create a new node
    Node* node1 = new Node(15);
   // cout<<node1 ->data<<endl;
    //cout<<node1->next<<endl;

    //head pointed to node 1
    Node* head = node1;
     Node* tail = node1;
    print(head);

    // InsertAtPosition(head,1,33);
    //  print(head);

    InsertAtHead(head,20);
    print(head);

    InsertAtPosition(head,1,33);
     print(head);

    InsertAtHead(head,25);
    print(head);

    deleteNode(1,head);
    print(head);
    deleteNode(1,head);
    print(head);
    deleteNode(1,head);
    print(head);
    deleteNode(1,head);
    print(head);
   
    return 0;
} 