#include<iostream>
using namespace std;
class A
{
protected:
int m;
public:
void get_m(int);
};
void A::get_m(int x)
{
m=x;
}
class B
{
protected:
int n;
public :
void get_n(int);
};
void B::get_n(int x)
{
n=x;
}
class C:public A,public B
{
public:
void display();
int c;
int add(int,int);
};
int C::add(int m,int n)
{
c=m+n;
return c;
}
void C::display(void)
{
cout<<"value of m :"<<m<<endl;
cout<<"value of n : "<<n<<endl;
cout<<"Addition is : "<<add(m,n)<<endl;
}
int main()
{
C obj;
obj.get_m(100);
obj.get_n(200);
obj.display();
}


