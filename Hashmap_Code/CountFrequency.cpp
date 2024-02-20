#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{
   // string str="Ayushman Poddar";

    int arr[8]={2,2,2,1,1,4,3,4};

    //unordered_map<char,int> counter;

    unordered_map<int,int> cntr;

    for(int i: arr){
        if(i != ' '){
            cntr[i]++;
        }
    }
    // for(auto i:cntr){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    unordered_map<int,int> :: iterator it;
    
    for(it=cntr.begin(); it!=cntr.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    return 0;
}
