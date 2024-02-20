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
    // DESTRUCTOR :
    ~Node(){
        int val = this -> data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory free for node with data : "<<val<<endl;
    }
    

};

void deleteNode(int position, Node* & head){

    // deleting the first or start node
    if(position =  1){
        Node* temp = head;
        temp ->next-> prev =NULL;
        head = temp->next;
        temp -> next =NULL;
        delete temp;
    }
    else{
        // deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr-> next;
            cnt++;
        }
        curr -> prev = NULL;
        prev -> next =curr -> next;
        curr -> next = NULL;
        delete curr;

    }

}
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

void  InsertAtPosition(Node* &head,int position,int data)
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
    // if(temp -> next = NULL){
    //     InsertAtTail(tail,data);
    //     return;
    // }

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

    InsertAtPosition(head,2,45);
    print(head);
    cout<<endl;

    InsertAtPosition(head,1,14);
    print(head);
    cout<<endl;

    InsertAtTail(tail,31);
    print(head);
    cout<<endl;

    InsertAtPosition(head,5,27);
    print(head);
    cout<<endl;

    deleteNode(1,head);
    print(head);
    cout<<endl;
    deleteNode(8,head);
    print(head);
  

    return 0;
}