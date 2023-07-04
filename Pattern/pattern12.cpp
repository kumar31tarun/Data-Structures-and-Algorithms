/*
A
B C
C D E
D E F G
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
            cout<<(char)('A'+row+col)<<" ";
            col++;
        }
        col=0;
        cout<<endl;
        row++;
    }
}