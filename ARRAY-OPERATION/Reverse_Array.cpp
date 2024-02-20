#include<iostream>
using namespace std;
int main(){
    int arr[10],i,j;
    int size = 5;

    cout<<"enter elements of array"<<endl;
    for(i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"elements of array are"<<endl;
    for(i=0;i<size;i++){
        cout<<"arr["<<i<<"] : "<<arr[i]<<" ";
    }
cout<<endl;
   cout<<"reverse element of array are:"<<endl;
    for(i=size-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
   
   
    return 0;
}