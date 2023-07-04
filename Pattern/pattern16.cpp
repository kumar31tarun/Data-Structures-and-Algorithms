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
    cout<<"Enter row: ";
    cin>>n;
    int row=0,col=0;
    while(row<n)
    {
        int space=row;
        while(space--)
        {
            cout<<"  ";

        }
        col=n-row;
        while(col--)
        {
            cout<<"* ";
        }
        cout<<endl;
        row++;
    }
}