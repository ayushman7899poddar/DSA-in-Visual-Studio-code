// INSERTION AT LAST POSITION OF ARRAY : 

#include<iostream>
using namespace std;
int main(){
     int a[20],i,size,num,pos;
    cout<<"Enter size of array :"<<endl;
    cin>>size;

// STORING THE VALUE OF ARRAY :

    cout<<"Enter elements of array :"<<endl;
    for(i=0;i<size;i++){
        cin>>a[i];
    }

// INSERT ANY NUMBER IN BETWEEN THIS ARRAY :
 
    //  TAKE ANY NUMBER THAT INSERT IN THIS ARRAY :
    cout<<"Enter a number that you want to inert :"<<endl;
    cin>>num;

    // TAKE ANY POSITION WHERE NUMBER IS INSERT :
    // cout<<"Enter a position where number is insert : "<<endl;
    // cin>>pos;

    // START LOOPS TO INSERTING THE NUMBER ON GIVEN POSITION :
    // for(i<size-1; i>=pos-1;i--){
    //     a[i+1] = a[i];
    // }
    // a[pos-1] = num;
    // size++;

    a[size] = num;
    size++;

    // PRINTING INSERTED ARRAY :
    for(i=0;i<size; i++){
        cout<<a[i]<<endl;
    }
    return 0;
}