#include <iostream>

using namespace std;

/*
	Question:
		Given an integer num, repeatedly add all its digits 
		until the result has only one digit, and return it.
	Constraints:
		0 <= num <= 231 - 1
*/
int addDigits(int num)
{
	int sum;
	// cout << result << endl; // random number if resutl is not initialized..

	// repeatedly add up digits of sum
	while (num >= 10)
	{

		sum = 0; // different with int sum = 0 outside fo the while loop

		while (num > 0)
		{
			sum += num % 10;
			num /= 10;
		} // while

		if (sum < 10)
		{
			return sum;
		}
		else
		{
			return addDigits(sum);
		}
		num = sum;
	} // while

	return num;
} //addDigits

// method 2
int addDigits_2(int num)
{
	if (num / 10 == 0)
		return num;
	int result = 0;
	while (num)
	{
		result += num % 10;
		num /= 10;
	}
	return addDigits(result);
} // addDigits_2

int main()
{
	int x = addDigits(990);
	cout << x << endl;
}