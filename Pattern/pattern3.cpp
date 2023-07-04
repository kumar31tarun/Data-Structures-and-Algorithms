/* . *
     * *
     * * *
     * * * *
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int i=0,j=0;
    while (i<n)
    {
        while(j<=i)
        {
            cout<<"* ";
            j++;
        }j=0;
        cout<<endl;
        i++;
    }
    
}