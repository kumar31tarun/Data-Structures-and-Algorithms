/*
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1

*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the rows: ";
    cin>>n;
    int row=1,col=1;
    while(row<=n)
    {
        int space=n-row;
        while(space--)
        {
            cout<<"  ";
        }
        while(col<=row)
        {
            cout<<col<<" ";
            col++;
        }col=1;

        int start=row-1;
        
        while(start--)
        {
           cout<<start+1<<" ";
           
        }
        cout<<endl;
        row++;
    }
}