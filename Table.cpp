#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a,b,c;
	cout<<"Table Of The Number :"<<endl;
	cin>>a;
	for(b=1;b<=10;b++)
		{
		c=a*b;
		cout<<a<<"*"<<b<<"="<<c<<endl;
		}
getch();
}