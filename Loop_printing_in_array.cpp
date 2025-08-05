#include<iostream>
using namespace std;

int main()
{
    int marks[5] = {89, 98, 94, 90, 96};

    // Printing array via For loop
    for (int i = 0; i < 5; i++)
    {
        cout<<"Marks of "<<i<<" is: "<<marks[i]<<endl;
    }
    cout<<endl;


    // Printing array via While loop
    int a = 0;
    while (a<5)
    {
        cout<<"Marks of "<<a<<" is: "<<marks[a]<<endl;
        a++;
    }
    cout<<endl;


    // Printing array via Do-while loop
    int b = 0;
    do
    {
        cout<<"Marks of "<<b<<" is: "<<marks[b]<<endl;
        b++;
    } while (b<5);
    
    return 0;
}