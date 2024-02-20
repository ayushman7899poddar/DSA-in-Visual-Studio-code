#include<iostream>
#include<math.h>
using namespace std;
#define MAX 1000;

bool hashTable[MAX+1][2];

bool search(int x){
    if(x>=0){
        if(hashTable[x][0]==1){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        x=abs[x];
        if(hashTable[x][1]==1){
            return true;
        }
        else{
            return false;
        }
    }
}

void insert(int arr[],int n){
    for(int i=0; i<n; i++){
        if(a[i]>=0){
            hashTable[arr[i][0]]=1;
        }
        else{
            hashTable[abs(arr[i])][1]=1;
        }
    }
}

int main()
{
    int arr[]={-1,9,2,-5,3,1};
    int n=6;
    insert(arr,n);

    int find = -1;
    if(search(find)){
        cout<<"element is present"<<endl;
    }else{
        cout<<"element is not present"<<endl;
    }
    
    return 0;
}