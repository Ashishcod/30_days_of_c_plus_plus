#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the value: ";
    cin>>n;
    if (n%2!=0)
    {
        cout<<" Weird";
    }
    else
    {
        if(n<=5 && n%2==0)
        {
            cout<<" Not Weird";
        }
        else if(n<=20 && n%2==0)
        {
            cout<<"Weird";
        }
        else
        {
            cout<<"Not Weird";
        }
    }
    return 0;
}
