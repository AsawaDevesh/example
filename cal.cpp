//Program by Devesh Asawa
#include<iostream>
using namespace std;
class Cal{
public:
int a,b;
void setinput(int x,int  y)
{
a=x;
b=y;
}
int add()
{
return a+b;
}
};
int main()
{
Cal obj;
int x,y;
cout<<"Enter Number 1 : ";
cin>>x;
cout<<"Enter Number 1 : ";
cin>>y;
obj.setinput(x,y);
cout<<"Inputs are : "<<obj.a<<" "<<obj.b << endl;
cout<<"Sum : "<<obj.add()<< endl;
return 0;
}
