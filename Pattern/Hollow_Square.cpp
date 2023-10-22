// * * * *
// *     *
// *     *
// * * * *

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"enter the value: ";
    cin>>num;

    //outer loop
    for(int row=0;row<num;row++)
    {
        //inner loop
        for(int col=0;col<num;col++)
        {
            if(row==0 || row==num-1)
            {
                cout<<"* ";
            }
            else
            {
                if(col==0 || col==num-1)
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