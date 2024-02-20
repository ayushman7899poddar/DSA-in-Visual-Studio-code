#include<iostream>
using namespace std;

class Node{

    public:
        int data;
        Node *next;
};

//  A FUNCTION TO INSERT A NODE AT THE BEGINNING

void insertList(Node * head,int newdata){

    // creating newnode
    Node *newnode = new Node();
    newnode -> data = newdata; // PUT IN DATA
    newnode -> next = head;
    head = newnode;

}

//  A FUNCTION TO PRINT THE LINKED LIST 

void printList(Node *head){
    

}

int main(){
    
    return 0;
}