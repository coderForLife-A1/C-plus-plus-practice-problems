// Input two numbers and swap their values.

#include<iostream>
using namespace std;

void swap(int* x, int* y)
{
    int z = *x;
    *x = *y;
    *y = z;
}

int main()
{
    int a, b;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;

    cout<<"The numbers before swapping are: "<<endl;
    cout<<"a: "<<a<<"  b: "<<b<<endl<<endl;
    
    swap(&a, &b);
    cout<<"The numbers after swapping are: "<<endl;
    cout<<"a: "<<a<<"  b: "<<b<<endl<<endl;
    
    return 0;
}