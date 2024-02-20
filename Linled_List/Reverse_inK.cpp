#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int data){
            this->data = data;
            this->next = NULL; 
        }
};

void ReverseK(Node * head,int k){

// BASE CASE
if(head == NULL){
    return NULL;
}

// STEP 1 : REVERSE FIRST K NODES
Node* next = NULL;
Node * curr = head;
Node* prev = NULL;
int count = 0;

while(curr !=NULL && count<k){
    next = curr -> next;
    curr -> next = prev;
    prev = curr;
    curr = next;
    count++;
}

// STEP 2: recursive call
if(next != NULL){
    head -> next = ReverseK(next,k);
}

// step 3: return head of reversed list
return prev;

}

int main(){

   
   
    return 0;
}