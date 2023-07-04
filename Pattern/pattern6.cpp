/*
1
2 3
3 4 5
4 5 6 7
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    int row=0,col=0;
    int count=0;
    while(row<n)
    {
        count=row+1;
        while(col<=row)
        {
            cout<<count<<" ";
            count++;
            col++;
        }col=0;
        cout<<endl;
        row++;
    }
}