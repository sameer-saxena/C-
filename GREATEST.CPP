#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c;
cout<<"Enter the numbers:\n";
cin>>a>>b>>c;
if (a>b && a>c)
{
	cout<<"A is the greatest";
}
else if (b>a && b>c)
{
	cout<<"B is the greatest";
}
else
{
	cout<<"C is the greatest";
}
getch();
}