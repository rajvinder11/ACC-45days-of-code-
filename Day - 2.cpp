#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a;
    int num;
    int add=0;
    cout<<"enter number: ";
    cin>>num;
    while(num>0)
    {
        a=num%10;
        num=num/10;
        add=add+a;
    }
    cout<<"sum of digits: "<<add;

    return 0;
}