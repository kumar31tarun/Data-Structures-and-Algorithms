/*
A B C
B C D
C D E
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter rows: ";
    cin>>n;
    int row=0,col=0;
    char value;
    while(row<n)
    {
        value=row+'A';
        while(col<n)
        {
            cout<<value<<" ";
            value++;
            col++;
        }col=0;
        cout<<endl;
        row++;
    }
}