#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;
int main(){

    // // CREATION
    // unordered_map<string,int> m;

    // // INSERTION : first way
    // pair<string,int> p = make_pair("poddar", 1);
    // m.insert(p);

    // // INSERTION : second way
    // pair<string,int> pair2("ayushman",2);
    // m.insert(pair2);

    // // INSERTION : third way
    // m["my"] = 1;

    // // SEARCHING
    // cout<<m["poddar"]<<endl;
    // cout<<m.at("poddar")<<endl;

    // //cout<<m.at("unknownkey")<<endl;
    // // cout<<m["unknownkey"]<<endl;;
    // // cout<<m.at("unknownkey")<<endl;

    // // SIZE
    // cout<<m.size()<<endl;

    // // TO CHECK PRESENCE
    // cout<<m.count("poddar")<<endl;

    // // REMOVE (erase)
    // m.erase("ayushman");
    // cout<<m.size()<<endl;
    
    // // for(auto i : m){
    // //     cout<<i.first<<" "<<endl<<i.second<<" "<<endl;
    // // }

    // // TRAVERSE USING ITERATOR

    // unordered_ map <string,int> :: iterator it = m.begin();

    // while(it != m.end()){
    //     cout<<it->first<<" "<<it->second<<endl;
    //     it++;
    // }


     
     int arr[]={1,4,2,3,6,9,4};
     unordered_map<int,int>mp;
     for(int i=0; i<7; i++){
        int key=arr[i];
        mp[key]++;
    }
    for(auto it= mp.begin(); it!=mp.end(); it++){
        cout<<it->first<<"  "<<it->second<<endl;
    }

    return  0;
}