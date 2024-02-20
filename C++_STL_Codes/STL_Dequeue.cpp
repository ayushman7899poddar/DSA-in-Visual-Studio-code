#include<iostream>
#include<deque>
using namespace std;
int main(){
     
    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    cout<<"front->"<<d.front()<<endl;
    cout<<"back->"<<d.back()<<endl;

    cout<<"1st element -> "<<d.at(1)<<endl;

    cout<<"empty or not -> "<<d.empty()<<endl;

    cout<<"before erase size is -> "<<d.size()<<endl;
    d.erase(d.begin(), d.begin()+1);
    cout<<"after erase size is -> "<<d.size()<<endl;

   for(int i:d){
    cout<<i<<endl;
   }

    return 0;
}