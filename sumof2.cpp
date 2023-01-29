#include<iostream>
using namespace std;
int add(int X,int Y)
{
    return X+Y;
}
int  main()
{
    int a,b;
    cout<<"enter the numbers"<<endl;
    cin>>a>>b;
    int sum=add(a,b);
    cout<<sum<<endl;
    return 0;


}