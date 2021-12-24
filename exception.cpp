#include<iostream>
//#include<exception.h>
using namespace std;
int main()
{
int a,b;
cout<<"Enter the value of a and b : ";
cin>>a>>b;
int x=(a-b);
try
{
if(x==0)
throw x;
else
cout<<"Result : "<<(a/(a-b));
}
catch(int c)
{
cout<<"Handled";
}
return 0;
}
