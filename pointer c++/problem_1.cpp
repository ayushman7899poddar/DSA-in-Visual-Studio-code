#include<iostream>
using namespace std;
int main(){

    /*
    int *ptr=0;
    int a=10;
     *ptr=&a;
    cout<<*ptr<<endl;
    */

/*
    int b=10;
    int *a=&b;
    cout<<"address of b is :" <<a<<endl;
*/

char ch='s';
char *ptr = &ch;
cout<<"before : "<<*ptr<<endl;
//ch++;
(*ptr)++;
cout<<"after : "<<*ptr<<endl;
    return 0;
}