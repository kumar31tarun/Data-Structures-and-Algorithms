#include<iostream>
#include<math.h>
using namespace std;

int BinaryToDecimal(int n)
{
    //With modulus technique
    int bit=0;
    int i=0;
    int decimal=0;
    while (n)
    {
        bit=n%10;
        decimal=bit*pow(2,i++)+decimal;
        n=n/10;
    }
    return decimal;
    
}




int main()
{
    int n;
    cout<<"Enter the number you want to convert to decimal: ";
    cin>>n;
    int result=BinaryToDecimal(n);
    cout<<result<<endl;
     
}