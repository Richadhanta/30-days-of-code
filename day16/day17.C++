Given an integer n, write a function that returns count of trailing zeroes in n.
Input: n = 5
Output: 1 
Factorial of 5 is 120 which has one trailing 0.
Code:

#include <iostream>
using namespace std;

int findTrailingZeros(int n)
{
	if (n < 0) // Negative Number Edge Case
		return -1;

	// Initialize result
	int count = 0;

	// Keep dividing n by powers of
	// 5 and update count
	for (int i = 5; n / i >= 1; i *= 5)
		count += n / i;

	return count;
}
int main()
{
	int n = 100;
	cout << "Count of trailing 0s in " << 100 << "! is "
		<< findTrailingZeros(n);
	return 0;
}
