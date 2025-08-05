// Input an array and find the sum of it.

#include<iostream>
using namespace std;

int main()
{
    int size;
    int count = 1;
    int sum = 0;
    
    cout<<"Enter the size of the array: ";
    cin>>size;
    int a[size];
    
    for (int j = 0; j < size; j++)
    {
        cout<<"Enter "<<count<<" element: ";
        cin>>a[j];
        count++;
    }
        
    for (int i = 0; i < size; i++)
    {
        sum = sum + a[i];
    }
    cout<<"The sum of elements of the array: "<<sum;

    return 0;
}