#include<iostream>
using namespace std;
class Number{
int a;
public:
Number(){
a=0;
}
Number(int num){
a=num;
}
Number(Number &obj)
{
cout<<"\n\ncopy constructor invoked \n";
a=obj.a;}//when no copy constructor is found compiler supplies its own copy constructor
void display(){
cout<<"The number for this object is : "<<a<<endl;
}
};//class closed
int main()
{
Number x,y,z(40),z2;
x.display();
y.display();
z.display();
Number z1(z);//copy constructor invoked
z1.display();
z2=z;////copy constructor not called b/c we have assigned z to already created object
z2.display();
Number z3=z;//copy constructor invoked
z3.display();
return 0;
}
