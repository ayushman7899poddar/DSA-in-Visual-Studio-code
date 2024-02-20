#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    unordered_set<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    for(auto it=s.begin(); it!=s.end(); it++){
        cout<<(*it)<<endl;
    }
    // s.clear();
    // cout<<s.size();

    int key=20;
    if(s.find(key)==s.end()){
        cout<<"present"<<endl;
    }
    else{
        cout<<"not present"<<endl;
    }

    s.erase(30);
    cout<<endl;
    cout<<s.size();

    
    return 0;
}