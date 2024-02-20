#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int rain_water(vector<int> a){
    int n=a.size(),ans=0;
    stack<int>s;
    for(int i=0; i<n; i++){
        while(!s.empty() && a[s.top()] < a[i]){
            int current = s.top();
            s.pop();

            if(s.empty()){
                break;
            }
            int diff = i - s.top() - 1;
            ans+= (min(a[s.top()],a[i]) - a[current]) * diff;

    }
    s.push(i);
    }
    return ans;

}


int main(){
    vector<int> a={0,2,0,2,1,0,1,3,2,1,2,1};
    cout<<rain_water(a)<<endl;
    return 0;
}