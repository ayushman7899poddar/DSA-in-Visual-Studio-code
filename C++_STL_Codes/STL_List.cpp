#include<iostream>
#include<list>

using namespace std;
int main(){
    
list<int> l;

// copy list
list<int> n(5,100);
for(int i:n){
    cout<<i<<" ";
}
cout<<endl;
l.push_back(1);
l.push_front(2);

cout<<"front -> "<<l.front()<<endl;
cout<<"back -> "<<l.back()<<endl;

for(int i:l){
    cout<<i<<" ";
}
cout<<endl;

l.erase(l.begin());
cout<<"after erase "<<endl;
for(int i:l){
    cout<<i<<" ";
}
cout<<endl;

cout<<"size of list is : "<<l.size()<<endl;


    return 0;
}