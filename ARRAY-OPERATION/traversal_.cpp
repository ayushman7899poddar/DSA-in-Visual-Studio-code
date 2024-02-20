#include<iostream>
using namespace std;
int main(){
    int arr[5],size,i;
    cout<<"Enter size of the array : "<<endl;
    cin>>size;

    // STORING VALUES OF ARRAY :

    cout<<"Enter Elements of this array : "<<endl;
    for(i=0;i<5;i++){
        cin>>arr[i];
    }

    // PRINTING THE VALUES OF ARRAY :
for(i=0;i<5;i++){
        cout<<"arr["<<i<<"] : "<<arr[i]<<endl;
    }
    return 0;
}