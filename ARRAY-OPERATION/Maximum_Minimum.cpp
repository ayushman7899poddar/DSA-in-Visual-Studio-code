#include<iostream>
using namespace std;
int main(){
     int arr[10],i,j;
    int size = 5;
    int max;

    cout<<"enter elements of array"<<endl;
    for(i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"elements of array are"<<endl;
    for(i=0;i<size;i++){
        cout<<"arr["<<i<<"] : "<<arr[i]<<" ";
    }
    cout<<"maximum element of this array : "<<endl;
    max = arr[0];
    // for(i=0;i<size;i++){
    //     if(arr[0]<arr[i]){
    //         cout<<arr[i];
    //     }
    // }
    for(i=0;i<size;i++){
    while(arr[0]<arr[i]){
        
    }
    }
    return 0;
}