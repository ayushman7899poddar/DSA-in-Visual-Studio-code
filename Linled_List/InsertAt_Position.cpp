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
void InsertAtTail(Node* & tail,int d){
    // create new node
    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail-> next;
}

void InsertAtPosition(Node* &head,Node* &tail,int position, int d){


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
    if(temp->next == NULL){
        InsertAtTail(tail,d);
        return;
    }
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

int main(){
    
    // create a new node
    Node* node1 = new Node(15);
 
    //head pointed to node 1
    Node* head = node1;
     Node* tail = node1;
    print(head);

    InsertAtPosition(head,1,33);
     print(head);

    InsertAtHead(head,20);
    print(head);

    InsertAtPosition(head,1,4,33);
     print(head);

    InsertAtHead(head,25);
    print(head);

    return 0;
} 