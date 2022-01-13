#include <iostream>

using namespace std;

uint32_t reverseBits(uint32_t n)
{
	// cout << n << end;
	uint32_t result = 0;
	for (int i = 31; i >= 0; i--)
	{
		result |= (n & 1) < i;
		n >>= 1; // n = n >> 1;
	}			 // for

	/*
		// while version
		while (n > 0) {
			result <<= 1;
			if (n & 1 == 1) {
				result ^= 1; // result = result ^ 1;
			}
			n <<= 1;
		}
		*/

	// // single shift
	// for (int i = 0; i < 32; i++)
	// {
	// 	result <<= 1;
	// 	if (n & 1 == 1)
	// 	{
	// 		result ^= 1;
	// 	}
	// 	n <<= 1;
	// } // for

	return result;
	// return n;
	//	return ~n // it flipped bits. not reversed.
}

int main()
{
	reverseBits(100);
	uint32_t result = reverseBits(100);
	cout << "result is: " << result << endl;
} // main