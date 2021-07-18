#include <stdio.h>

int main()
{
	int a[3][10],i,b[30],j,m=0;

	for(i=0;i<10;i++)
	{b[i]=2*(i+1);}

	for(i=10;i<20;i++)
	{b[i]=7*(m+1);
	m++;}

	m=0;
	for(i=20;i<31;i++)
	{b[i]=9*(m+1);
	m++;}

  m=0;

	for(i=0;i<3;i++){
	for(j=0;j<10;j++)
	{a[i][j]=b[m];
	m++;}
	}
	for(i=0;i<3;i++){
	for(j=0;j<10;j++){
		printf("%d ",a[i][j]);
		}
		}
     getch();
	return 0;
}
