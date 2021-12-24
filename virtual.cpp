#include<iostream>
using namespace std;
class base{
public:
void show()
{
cout<<"Base class show ";
}
void display()
{
cout<<"Base class display ";
}
};
class derived:public base
{
public:
void show()
{
cout<<"Derived class show ";
}
void display()
{
cout<<"Derived class display ";
}
};
int main()
{
base *ptr;
base b;
ptr=&b;
ptr->show();
ptr->display();
derived d;
ptr=&d;
ptr->show();
ptr->display();
return 0;
}
