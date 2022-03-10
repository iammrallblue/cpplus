#include <iostream>
#include <stdio.h>

/*Parameter Passing*/

// 1. Passing by value
void swap(int x, int y)
{
	int temp;
	temp = x;
	x= y;
	y = temp;

} // swap

int main(int argc, char const *argv[])
{
	int a ,b;
	a = 10;
	b = 20;
	swap(a,b);
	printf("%d%d\n",a,b );
	return 0;
}


// 2. Passing by address
void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x= *y;
	*y = temp;

} // swap

int main(int argc, char const *argv[])
{
	int a ,b;
	a = 10;
	b = 20;
	swap(&a,&b);
	printf("%d%d\n",a,b );
	return 0;
}


// 3. Passing by Reference
void swap(int &x, int &y)
{
	int temp;
	temp = x;
	x= y;
	y = temp;

} // swap

int main(int argc, char const *argv[])
{
	int a ,b;
	a = 10;
	b = 20;
	swap(a,b);
	printf("%d%d\n",a,b );
	return 0;
}
