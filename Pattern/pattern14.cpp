/*
      *
    * *
  * * *
* * * *

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
        int space=n-row;
        //for printing space
        while(space--)
        {
            cout<<"  ";
        }
        //for printing stars
        while(col<=row)
        {
            cout<<"* ";
            col++;

        }col=1;
        cout<<endl;
        row++;
    }
}