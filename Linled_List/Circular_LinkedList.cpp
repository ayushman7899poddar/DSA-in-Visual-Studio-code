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
    do{
        cout<< tail -> data <<" ";
        tail = tail -> next;
    }  while(tail != temp);

}

int main(){
    
    Node* tail = NULL;

    InsertNode(tail,5,3);
    print(tail);
    cout<<endl;

    InsertNode(tail,3,9);
    print(tail);
    cout<<endl;

    InsertNode(tail,9,2);
    print(tail);
    cout<<endl;
    
    InsertNode(tail,2,7);
    print(tail);
    cout<<endl;
    InsertNode(tail,3,6);
    print(tail);
    cout<<endl;

    InsertNode(tail,2,11);
    print(tail);
    cout<<endl;

     InsertNode(tail,3,5);
    print(tail);
    cout<<endl;

    return 0;
}