#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;
int main(){
    int arr[6]={1,1,2,2,2,4};
    string str="ayushman poddar";

    unordered_map<int,int>p;
    for(int i : arr){
        if(i !=' '){
            p[i]++;
        }
    }
    unordered_map<string,int> mp;
    for(char j:str){
        if(j !=' '){
            mp[j]++;
        }
    }
    unordered_map<int,int> :: iterator it;
    for(it=p.begin(); it!=p.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    unordered_map<string,int> :: iterator x;
    for(x=mp.begin(); x!=mp.end();x++){
        cout<<x->first<<" "<<x->second<<endl;
    }
    
    return 0;
}