// Print the Fibonacci series ---> 0 1 1 2 3 5 8 13 21 ........

#include<iostream>
using namespace std;

int main()
{
    int a = 0;
    int b = 1;

    cout<<a<<endl;
    while (a<10000)
    {
        a = a+b;
        cout<<a<<endl;
        b = a-b;
    }

    return 0;
}