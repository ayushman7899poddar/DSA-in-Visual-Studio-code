#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* prev;
        Node* next;

    // CONSTRUCTOR :
    Node(int data){
        this -> data = data;
        this -> prev = NULL;
        this -> next = NULL;

    }

};
// traverse the nodes
void print(Node* head){
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
      //  cout<<temp->next<<endl;
      temp = temp->next;
    }
}

int getLength(Node* head){
    int len = 0;
    Node* temp = head;

    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

void InsertAtHead(Node* & head,int data){

    Node* temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp; 


}

void InsertAtTail(Node* & tail, int data){
    Node* temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void  InsertAtPosition(Node* &head,Node* &tail,int position,int data)
{
    // insert at first position
    if(position==1){
            InsertAtHead(head,data);
            return;
        }
    Node* temp = head;
    int cnt = 1;

    while(cnt< position-1){
        temp = temp->next;
        cnt++;
    }

    // inserting at last position
    if(temp -> next = NULL){
        InsertAtTail(tail,data);
        return;
    }

    // craeting a node
    Node* NodeToInsert = new Node(data);
    NodeToInsert -> next = temp->next;
    temp-> next = NodeToInsert;
    NodeToInsert->prev = temp;
}
int main(){

    Node* node1 = new Node(5);
    Node* head = node1;
    Node* tail = node1;

    print(head);

    cout<<"length is : "<<getLength(head)<<endl;
    
    InsertAtHead(head,7);
    print(head);

    cout<<endl;

    InsertAtHead(head,10);
    print(head);

    cout<<endl;

    InsertAtTail(tail,21);
    print(head);
    cout<<endl;

    InsertAtHead(head,12);
    print(head);
    cout<<endl;

    InsertAtPosition(head,tail,2,45);
    print(head);
    cout<<endl;

    InsertAtPosition(head,tail,1,14);
    print(head);
    cout<<endl;

    InsertAtTail(tail,31);
    print(head);
    cout<<endl;

    InsertAtPosition(head,tail,5,27);
    print(head);
    cout<<endl;

    return 0;
}