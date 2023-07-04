/*
A B C
A B C
A B C
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the rows: ";
    cin>>n;
    int i=0,j=0;
    int value=65;
    while(i<n)
    {
        while(j<n)
        {
            cout<<(char)value<<" ";
            
            value++;
            j++;
        }
        j=0;
        value=65;
        cout<<endl;
        i++;
    }

}