/*
A
B B 
C C C
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter rows: ";
    cin>>n;
    int row=0,col=0;
    while(row<n)
    {
        while(col<=row)
        {
            cout<<(char)('A'+row)<<" ";
            col++;
        }
        col=0;
        cout<<endl;
        row++;
    }
}