#include<iostream>
#include<stack>
using namespace std;

int main(){
    string s;
    cout<<"enter string"<<endl;
    cin>>s;
    int n = s.size();
    stack<int>st;
    bool ans=false;

    for(int i=0; i<n; i++){
        if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
            st.push(s[i]);
        }
        else if(s[i] == '('){
            st.push(s[i]);
        }
        else if(s[i] == ')')
        {
            if(st.top()=='('){
                ans = true;
            }
            while(st.top()=='+' || st.top()=='-' || st.top()=='*' || st.top()=='/'){
                st.pop();
            }
        }
    }
    cout<<ans;
    return 0;
}