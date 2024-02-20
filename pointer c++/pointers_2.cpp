#include<iostream>
using namespace std;
int main(){
    int arr[10]={8};

    cout<<"address of first memory block : "<<arr<<endl;

    cout<<"address of first memory block : "<<&arr[0]<<endl;

    cout<<"first element of array is "<<arr[0]<<endl;
    cout<<*arr<<endl;
    cout<<*arr[1]<<endl;
    return 0;
}