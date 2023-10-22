// * * * * * * 
// *         *
// *         *
// *         *
// *         *
// * * * * * *


#include<iostream>
using namespace std;

int main()
{

    int num;
    cout<<"Enter the value: ";
    cin>>num;
    //outer loop
    for(int row=0;row<num;row++)
    {
        //inner loop
        for(int col=0;col<num+1;col++)
        {
            if(row==0 || row==num-1)
            {
                cout<<"* ";
            }
            else{
                if(col==0 || col==num)
                {
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
        cout<<endl;

    }
}