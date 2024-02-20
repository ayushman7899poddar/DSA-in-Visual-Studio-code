#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> stockSpan(vector<int> prices){
    vector<int> ans;
    stack<pair<int,int>> s;

    for(auto prices : prices){
        int days = 1;
        while(!s.empty() && s.top().first <= prices){
            days+=s.top().second;
            s.pop();
        }
        s.push({prices,days});
        ans.push_back(days);
    }
    return ans;
}

int main(){
   vector<int> a = {100,80,60,70,60,75,85};
   vector<int> res = stockSpan(a);
   for(auto i : res)
    cout<<i<<" ";
   //cout<<stockSpan(prices);
  cout<<endl;
}