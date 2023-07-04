/*
D
C D
B C D
A B C D
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter rows: ";
    cin>>n;
    int row=0,col=0;
    while(row<n)
    {
        char value='A'+n-1-row;
        while(col<=row)
        {
            cout<<value<<" ";
            value++;
            col++;
        }col=0;
        cout<<endl;
        row++;
    }
}