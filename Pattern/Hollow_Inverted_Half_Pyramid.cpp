// * * * * *
// * * * *
// * * *
// * *
// *

#include<iostream>
using namespace std;

int main()
{

    int num;
    cout<<"Enter value: ";
    cin>>num;

    //outer loop
    for(int row=0;row<num;row++)
    {
        //inner loop
        for(int col=0;col<num-row;col++)
        {
            if(row==0 || row==num-1)
            {
                cout<<"* ";
            }
            else
            {
                if(col==0 || col==num-row-1)
                {
                    cout<<"* ";
                }
                else
                {
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }
}