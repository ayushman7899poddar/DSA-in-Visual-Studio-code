#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    // CONSTRUCTOR :
    Node(int d){
        this->data = d;
        this->next = NULL;
    }

    // DESTRUCTOR :
    ~Node(){
        int value = this->data;
        if(this->next !=NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory is free for node with data : "<<value<<endl;
    }


};

void InsertNode(Node* & tail, int element,int d){

    // empty list
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode ->next = newNode;
    }
    else{
        // non-empty list
        // assuming that the element is present in the list

        Node* curr = tail;

        while(curr->data != element){
            curr = curr -> next;
        }

        // elements found -> curr is representing element's node
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;

    }
}

void print(Node* tail){
    Node* temp = tail;

    // empty list
    if(tail == NULL){
        cout<<"List is empty "<<endl;
        return;
    }
    do{
        cout<< tail -> data <<" ";
        tail = tail -> next;
    }  while(tail != temp);

    

}

void deleteNode(Node* &tail, int value){

    // empty list
    if(tail = NULL){
        cout<<"List is empty please check again"<<endl;
        return;
    }
    else{
        // non-empty : assuming that value is present in the linked list
        Node* prev =tail;
        Node* curr = prev -> next;

        while(curr -> data != value){
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

    // 1 NODE LINKED LIST
        if(curr == prev){
            tail == NULL;
        }
    // >=2 NODE LINKED LIST
       else if(tail == curr){
            tail =prev;
        }

        curr -> next = NULL;
        delete curr;
        
    }
}

int main(){
    
    Node* tail = NULL;

    InsertNode(tail,5,3);
    print(tail);
    cout<<endl;

    InsertNode(tail,3,8);
    print(tail);
    cout<<endl;
     
    InsertNode(tail,8,5);
    print(tail);
    cout<<endl;

    

    deleteNode(tail,3);
    print(tail);

    deleteNode(tail,2);
    print(tail);



    return 0;
}