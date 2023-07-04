/*
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1

*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter rows: ";
    cin>>n;
    int row=1,col=1;
    while(row<=n)
    {
        int first=n-row+1;
        while(first--)
        {
            cout<<col<<" ";
            col++;
        }col=1;
        int star=(row-1)*2;
        while(star--)
        {
            cout<<"* ";
        }
        int second=n-row+1;
        while(second--)
        {
            cout<<second+1<<" ";
           
        }

        cout<<endl;
        row++;
    }
}