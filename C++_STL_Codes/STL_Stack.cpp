#include<iostream>
#include<stack>
using namespace std;
int main(){
    
    stack<string> s;

    s.push("ayushman");
    s.push("poddar");
    s.push("darbhanga");

    cout<<"top element is : "<<s.top()<<endl;
    s.pop();
    cout<<"top element is : "<<s.top()<<endl;

    cout<<"size of stack is : "<<s.size()<<endl;

    cout<<"empty or not : "<<s.empty()<<endl;
    return 0;
}