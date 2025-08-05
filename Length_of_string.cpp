// Input a string and print the number of characters in it.

#include<iostream>
using namespace std;

int main()
{
    string str;
    cout<<"Enter a string: ";
    cin>>str;

    // Legth of string by keywords
    cout<<"The length of the string is "<<str.size()<<endl;
    cout<<"The length of the string is "<<str.length()<<endl;
    
    // Length of string by loop
    int count = 0;
    for (int i = 0; str[i]; i++)
    {
        count++;
    }
    cout<<"The length of the string using loop is "<<count<<endl;
    
    return 0;
}