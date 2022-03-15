#include <istream>
#include <stdio.h>

using namespace std;

/**
 * Taylor Series by Horner's Rule
 */ 
double e(int x, int n)
{
	static double p = 1, f = 1;
	double r;
	if (n == 0)
	{
		return 1;
	}
	r = e(x, n - 1);
	p = p * x;
	f = f * n;
	return r + p / f;
}

int main(int argc, char const *argv[])
{
	printf("%lf \n", e(1, 10)); // 2.718282
	return 0;
}