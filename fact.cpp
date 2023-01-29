#include<iostream>
using namespace std;
int factorial(int X)
{
    int fact=1;
    for(int i=2;i<=X;i++)
{
    fact=fact*1;
}
return fact;
    
}
int main()
{
int n,r;
cout<<"enter the value of n and r:"<<endl;
cin>>n>>r;
int ncr=factorial(n)/(factorial(r)*factorial(n-r));
cout<<ncr<<endl;
return 0;
}
