/* program to print 1 2 3
                    4 5 6
                    7 8 9*/

#include<iostream>
using namespace std;
int main()
{
   int n;
   int i=0;
   int j=0;
   cout<<"Enter the value of n: ";
   cin>>n;
   cout<<endl;
   int count=1;
    while (i<n)
    {
        while (j<n)
        {
           cout<<count<<" ";
           count++;
        j++;
        }
        j=0;
        cout<<endl;
        i++;
    }
   return 0; 
}