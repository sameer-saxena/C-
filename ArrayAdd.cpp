#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[3],i,add;
	for (i=0;i<=2;i++)
	{
		cin>>a[i];
	}
	add=a[0];
	for(i=0;i<=2;i++)
	{
		add=add+a[i];
	}
	cout<<"Addition is:"<<add;
	getch();
}