#include<iostream>
using namespace std;

class queue{
    public:
        int *arr;
        int size;
        int front;
        int rear;

    queue(){
        size = 1000; 
        arr = new int[size];
        front = 0;
        rear = 0;
    }

};
void push(int data){
    // check overflow condition
    if(rear == size){
        cout<<"queue is full"<<endl;
    }
    else{
        arr[rear] = data;
        rear++;
    }
}
int pop(){
    // check underflow condition
    if(front == rear){
        return -1;
    }
    else{
        int ans = arr[front];
        arr[front] = -1;
        front++;
        if(front == rear){
            front = 0;
             rear = 0;
        }
        return ans;
    }

}
int main(){
    queue q;
    q.push(2);
    q.push(4);
    q.push(6);
    q.push(8);

    q.pop();
    q.pop();
    return 0;
}