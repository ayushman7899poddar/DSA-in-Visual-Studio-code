#include<iostream>
#include<queue>

using namespace std;
int main(){
     
     queue<string> q;
     q.push("ayushman");
     q.push("poddar");
     q.push("darbhanga");

    cout<<"first element -> "<<q.front()<<endl;

    q.pop();
    cout<<"size is : "<<q.size()<<endl;
    return 0;
}