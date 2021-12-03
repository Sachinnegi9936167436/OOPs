#include<iostream>
using namespace std;
class student
{
public:
int roll;
void get_roll()
{
cout<<"Enter the roll number : ";
cin>>roll;
}
void put_roll()
{
cout<<"Rollm number is : "<<roll<<endl;
}
};
class test:public virtual student
{
public:
int m1,m2;
void get_marks()
{
cout<<"Enter the marks : ";
cin>>m1>>m2;
}
void put_marks()
{
cout<<"Marks : "<<m1<<m2;
}
};
class sport:public virtual student
{
public:
int sp;
void get_sport()
{
cout<<"Enter the sport : ";
cin>>sp;
}
void put_sport()
{
cout<<"Sport is :  "<<sp;
}
};
class result:public test,public sport
{
public:
int res;
void display()
{
res=m1+m2+sp;
put_roll();
put_marks();
put_sport();
cout<<res;
}
};
int main()
{
result r;
r.get_roll();
r.get_marks();
r.get_sport();
r.display();
return 0;
}


 
