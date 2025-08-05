// Input a number and check if the number is palindrome number or not.
// Palindrome number --> Number which is same from both the ends.

#include<iostream>
using namespace std;

int main()
{
    string num1;
    cout<<"Enter a string: ";
    getline (cin, num1);

    string num2 = num1;
    int n = num1.length();
    for (int i = 0; i < n/2; i++)
    {
        swap(num1[i], num1[n-i-1]);
    }
    if (num2 == num1)
    {
        cout<<"The given string is a palindrome number";
    }
    else
    {
        cout<<"The given string is not a palindrome number";
    }
       
    return 0;
}