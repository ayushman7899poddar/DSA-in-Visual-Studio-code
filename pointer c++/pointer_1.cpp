#include<iostream>
using namespace std;
int main(){
    int num=5;
    int *ptr=&num;
    cout<<num<<endl;

// address of operator -&
cout<<"address of num is"<<&num<<endl;
cout<<"value is "<<*ptr<<endl;

double d=7.4;
double *p2=&d;
cout<<"address of d is"<<&num<<endl;
cout<<"value of d is "<<*p2<<endl;

cout<<"size of integer is "<<sizeof(num)<<endl;
cout<<"size of pointer is "<<sizeof(ptr)<<endl;
cout<<"size of double is "<<sizeof(double)<<endl;
cout<<"size of pointer is "<<sizeof(p2)<<endl;

int i=8;
int *q=&i;

cout<<q<<endl;
cout<<*q<<endl;

int *p=0;
p=&i;

cout<<p<<endl;
cout<<*p<<endl;


int b=7;
int a = b;
cout<<"before "<<b<<endl;
a++;
cout<<"after "<<b<<endl;

int *p3=&b;
cout<<"before "<<b<<endl;
(*p3)++;
cout<<"after "<<b<<endl;

int w=8;
int *p4=&w;
cout<<p4<<" - "<<w<<endl;

// important concept

int x=4;
int *y=&x;


(*y)=*y+1;
cout<<*y<<endl;
cout<<(*y)++<<endl;
cout<<"before "<<y<<endl;
y=y+1;
cout<<"after "<<y<<endl;
cout<<"before "<<y<<endl;
y=y+3;
cout<<"after "<<y<<endl;
    return 0;
}