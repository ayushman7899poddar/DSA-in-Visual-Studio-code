// DELETION AT ANY SPECIFIC POSITION :

#include<iostream>
using namespace std;
int main(){
    int a[10],i,size,pos;
    cout<<"Enter size of array :"<<endl;
    cin>>size;

    cout<<"enter elements of array :"<<endl;
    for(i=0;i<size;i++){
        cin>>a[i];
    }

    cout<<"enter position where data is delete :"<<endl;
    cin>>pos;

    // TAKE LOOP FOR DELETE OPERATION IN THIS ARRAY :
    for(i=pos-1;i<size-1;i++){
        a[i]=a[i+1];
    }
    size--;

    for(i=0;i<size;i++){
        cout<<" "<<a[i];
    }
    return 0;
}