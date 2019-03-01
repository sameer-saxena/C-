#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[3],max;
	for (i=0;i<=2;i++)
	{
		cin>>a[i];
	}
	max=a[0];
	for(i=0;i<=2;i++)
	{
		if( max < a[i] )
			{
				max=a[i];
			}
	}
	cout<<max;
	getch();
} 
 
