#include<iostream>
#include<queue>

using namespace std;

class Heap{
    public:
        int arr[100];
        int size=0;

    Heap(){
        arr[0] = -1;
        size = 0;
    }

void insert(int value){
    size = size + 1;
    int index = size;
    arr[index] = value;
    int parent = index/2;

    while(index > 1){
    if(arr[parent] < arr[index])
    {
        swap(arr[parent],arr[index]);
        index = parent;
    }
    
    else{
        return;
    }
}
}

void print(int arr[], int size){
    for(int i=0; i<=size; i++){
        cout<<arr[i]<<"  ";
    }
}

void deleteFromHeap(){
    // base case
    if(size == 0){
        cout<<"deletion is not posssible"<<endl;
        return;
    }
    // STEP 1: SWAP LAST ELEMENT TO FISRT NODE
    arr[1] = arr[size];
    // STEP 2: REMOVE LAST ELEMENT POSITION
    size--;

    // STEP: PROPAGATE ROOT NODE TO ITS CORRECT POSITION
    int i= 1;

    while(i<size){
        int leftIndex = 2*i;
        int rightIndex = 2*i + 1;

        if(leftIndex<size && arr[i]<arr[leftIndex]){
            swap(arr[i],arr[leftIndex] );
            // arr[i] = arr[leftIndex];
                i = leftIndex;
        }
        else if(rightIndex<size && arr[i]<arr[rightIndex]){
                swap(arr[i],arr[rightIndex]);
                //arr[i] = arr[rightIndex];
                i = rightIndex;
        }
        else{
            return;
        }
    }
}

void Heapify(int arr[] , int n, int i){
    int largest = i;
    int left = 2*i;
    int right = 2*i+1;

    if(left <= n && arr[largest] < arr[left]){
        largest = left;
    }
    else if(right <= n && arr[largest] < arr[right]){
        largest = right;
    }

    else if(largest != i){
        swap(arr[largest], arr[i]);
        Heapify(arr, n, largest );
    }
}

void HeapSort(int arr[] , int n){
    int size = n;

    while(size > 1){

        // STEP 1: SWAP
        swap(arr[size], arr[1]);
        size--;

        // STEP 2: 
        Heapify(arr,size,1);
    }
}

};

int main(){
   Heap h1;
   h1.insert(23);
   h1.insert(43);
   h1.insert(63);
   h1.insert(82);
   h1.insert(60);
   h1.insert(55);

   h1.print();

    // h1.deleteFromHeap();
    // cout<<endl;
    // h1.print();

// HEAPIFY FUNCTION PROCEED
    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;
   

    for(int i = n/2; i>=0 ; i--){
      h1.Heapify(arr,n,i);
    }
cout<<endl;
    cout<<"printing the array now"<<endl;
    for(int i=1; i<=n; i++)
    {
        cout<<arr[i]<< " ";
    }
    cout<<endl;

    // HEAP SORT :
   h1.HeapSort(arr,n);

    cout<<"print sorted array : "<<endl;
    for(int i =1;i<=n;i++){
        cout<<arr[i] <<" ";

    }
    cout<<endl;



    cout<<"USING PRIORITY QUEUE "<<endl;

    // MAX_HEAP
    priority_queue<int> pq;

    pq.push(3);
    pq.push(2);
    pq.push(5);
    pq.push(9);
    pq.push(4);

    cout<<"top element is :"<<pq.top()<<endl;
    pq.pop();
    cout<<"top element is :"<<pq.top()<<endl;

    cout<<"size is "<<pq.size()<<endl;

    if(pq.empty()){
        cout<<"pq is empty"<<endl;
    }
    else{
        cout<<"pq is not empty"<<endl;
    }

    //MIN_HEAP
    priority_queue<int,vector<int>,greater<int> > minheap;

    minheap.push(6);
    minheap.push(4);
    minheap.push(8);
    minheap.push(5);
    
    cout<<"top element is :"<<minheap.top()<<endl;
    minheap.pop();
    cout<<"top element is :"<<minheap.top()<<endl;

    cout<<"size is "<<minheap.size()<<endl;

    if(minheap.empty()){
        cout<<"minheap is empty"<<endl;
    }
    else{
        cout<<"minheap is not empty"<<endl;
    }
    return 0;
}