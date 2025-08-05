// Take input of age in years and convert it into number of days.

#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your age in years: ";
    cin>>age;

    cout<<"Your approximate age in days: "<<age*365;
    return 0;
}