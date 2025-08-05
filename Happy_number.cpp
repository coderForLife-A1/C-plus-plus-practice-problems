// Input a number and check whether the number is a happy number or not.
// Happy no. ---> The sum of squares of digits of a number is taken and again the sum of squares of digits of that number is taken till evetually it becomes 1.

#include<iostream>
using namespace std;

int squareSum(int a)
{
    int squareSum = 0;
    while (a)
    {
        squareSum += (a%10)*(a%10);
        a /= 10;
    }
    return squareSum;
}

bool isHappynumber(int a)
{
    int slow, fast;
    slow = fast = a;
    do
    {
        slow = squareSum(slow);
        fast = squareSum(squareSum(fast));
    } while (slow != fast);
    return (slow == 1);
}

int main()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    
    if (isHappynumber(a))
    cout<<a<<" is a happy number";
    else
    cout<<a<<" is not a happy number";
    
    return 0;
}
