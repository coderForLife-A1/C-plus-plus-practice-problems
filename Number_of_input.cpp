// Input a string and count the number of words in it.

#include<iostream>
using namespace std;

int main()
{
    int num;
    int count = 0;
    cout<<"To stop inputs enter anything other than number"<<endl<<"Enter the values: ";
    
    while(cin>>num)
    {
        count++;
    }
    cout<<"Number of inputs: "<<count;

    return 0;
}