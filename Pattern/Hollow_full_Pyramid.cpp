//       *
//     *   *
//   *       *
// * * * * * * *

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter value: ";
    cin>>num;

    //outer loop
    for(int row=0;row<num;row++)
    {
        //inner loop
        for(int col=0;col<num+row;col++)
        {
            if(col<num-row-1)
            {
                cout<<"  ";
            }
            else
            {
                if(row==0 || row==num-1)
                {
                    cout<<"* ";
                }
                else if(col==num-row-1 || col==num+row-1)
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