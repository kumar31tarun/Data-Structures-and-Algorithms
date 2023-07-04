/*
1
2 3
4 5 6
7 8 9 10
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    int row=0,col=0,count=1;
    while(row<n)
    {
        while(col<=row)
        {
            cout<<count<<" ";
            count++;
            col++;
        }col=0;
        cout<<endl;
        row++;
    }
    return 0;
}