/*program to print 1 2 3 4
                   1 2 3 4
                   1 2 3 4
*/                   


#include<iostream>
using namespace std;

int main()
{
    int n,i=1,j=1;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<endl;
    //loop for rows
  while (i<=n)
  {
    //loop for columns
    while (j<=n)
    {
        cout<<j<<" "; //prints value 
         j++;
    }j=1;             //makes value of j back to 1
    cout<<endl;
    i++;
  }
  return 0;
}