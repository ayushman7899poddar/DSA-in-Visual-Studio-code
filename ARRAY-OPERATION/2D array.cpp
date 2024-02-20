#include<iostream>
using namespace std;
int main(){
    int arr[2][2],size,i,j;
    cout<<"enter size of array :"<<endl;
    cin>>size;
    cout<<"enter elements of array :"<<endl;
    for( i=0; i<2; i++){
        for( j=0; j<2; j++){
            cin>>arr[i][j];
        }
    }
    //cout<<"elements of array are :"<<endl<<"arr["<<i<<"]"<<"["<<j<<"]"<<arr[i][j]<<endl;

    // printing the elements of array
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout<<"elements of array are :"<<endl<<"arr["<<i<<"]"<<"["<<j<<"] : "<<arr[i][j]<<endl;
        }
    }

    return 0;
}