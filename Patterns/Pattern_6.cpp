// Print the following series
/*  @ # @ # @ 
    # @ # @
    @ # @
    # @
    @
*/

#include<iostream>
using namespace std;

int main()
{   
    char a = '@';
    char b = '#';
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            if((i+j)%2==0)
            cout<<a<<" ";
            else
            cout<<b<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}