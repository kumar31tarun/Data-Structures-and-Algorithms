/*
1
2 2 
3 3 3
4 4 4 4 
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int row=0,col=0;
    while(row<n)
    {
        while(col<=row)
        {
            cout<<row+1<<" ";
            col++;
        }col=0;
        cout<<endl;
        row++;
    }
    return 0;
}