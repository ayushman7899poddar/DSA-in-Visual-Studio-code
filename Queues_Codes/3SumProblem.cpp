#include<iostream>
using namespace std;

// bool isSum(int arr[], int n,int key){
//     //n = arr.size();
    
//      for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             for(int k = j+1; j<n;j++){
//                 if(arr[i]+arr[j]+arr[k] == key){
//                     return 1;
                    
//                 }
//             }
//         }
//     }
//     return -1;
// }



int main(){
    int arr[] = {12,3,7,1,6,9};
    int n=6;
    int key=24;

    //cout<<isSum(arr,6,24);
    stack<int> st;
    for(int i=0; i<n; i++){
        st.push(arr[i]);
    }
    
    while(!st.empty()){
        
    }
   
    return 0;
}