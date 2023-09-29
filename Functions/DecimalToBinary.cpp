#include<iostream>
#include<math.h>
using namespace std;

// int DecimalToBinary(int n)
// { 
//     //Division method to extract bits
//     int bit=0;
//     int binary=0;
//     int i=0;
//     while(n>0)
//     {
//         bit=n%2;
//         binary=bit*pow(10,i++)+binary;
//         n=n/2;
        
//     }
//     return binary;
// }

//This below method is much better as it works on bit level which is more faster

int DecimalToBinary(int n)
{ 
    //Bitwise method to extract bits
    int bit=0;
    int binary=0;
    int i=0;
    while(n>0)
    {
        bit=n&1;
        binary=bit*pow(10,i++)+binary;
        n=n>>1;
        
    }
    return binary;
}


int main()
{
    int n;
    cout<<"Enter the number you want to convert to binary: ";
    cin>>n;
    int result= DecimalToBinary(n);
    cout<<result<<endl;;
}