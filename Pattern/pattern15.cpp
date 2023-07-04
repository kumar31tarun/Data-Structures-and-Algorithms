/*
* * * *
* * *
* *
*

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
        int cal=n-row;
        while(cal--)
        {
            cout<<"* ";
            col++;
        }col=0;
        cout<<endl;
        row++;

    }
}