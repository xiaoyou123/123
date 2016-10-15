#include<stdio.h>
int main()
{
	int a,b,c;

	scanf("%d %d %d",&a,&b,&c);
	if(b > a)	a = b;	//a是a，b两个里面最大的数 
	if(c > a) 	a = c;	//a，b两个里面最大的数与c比较，a取最大的数 
	printf ("max=%d\n",a);
	
	return 0;
} 
