// Input a string and reverse its contents.

#include<iostream>
using namespace std;

void lmn(char &x,char &y)
{
    swap(x,y);
}

int main()
{
    // String reversal using loop
    
    string str;
    cout<<"Enter a string: ";
    getline (cin, str);

    int n = str.size();
    for (int i = 0; i < n/2; i++)
    {
        lmn(str[i], str[n-i-1]);
    }
    cout<<"The reversed string using loop is "<<str<<endl;
    

    
    // String reversal using two-pointer method

    int left = 0;
    int right = str.length() - 1;

    while(left<right)
    {
        lmn(str[left], str[right]);
        left++;
        right--;
    }
    cout<<"The reversed string using two-pointer method is "<<str<<endl;

    return 0;
}
