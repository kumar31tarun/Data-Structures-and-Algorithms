/*
1
2 1
3 2 1
4 3 2 1
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    int row=0,col=0;
   
    while(row<n)
    {
        while(col<=row)
        {
            cout<<row-col+1<<" ";
            
            col++;
        }
        col=0;
        cout<<endl;
        row++;
    }
}