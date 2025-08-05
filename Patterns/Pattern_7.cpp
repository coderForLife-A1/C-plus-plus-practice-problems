// Print the following series
/*  @ @ @ @ @ 
    # # # #
    @ @ @
    # #
    @
*/

#include<iostream>
using namespace std;

int main()
{   
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            if (i%2==1)
            cout<<"@"<<" ";
            else
            cout<<"#"<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}