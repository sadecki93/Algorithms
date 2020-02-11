#include <iostream> // RECURSION - FIBONACCI SEQUENCE

using namespace std;

/* in the Fibonacci sequence each number is the sum of the two preceding ones, starting from 0 and 1
	0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ...
*/

int fib(int);

int main()
{
	int n;
	
	cout << "Enter element number of Fibonacci sequence to calculate: " << endl;
	cin >> n;
	cin.ignore();
	cout << endl;
	cout << "Element no. "	<< n << " of Fibonacci sequence is equal to: " << fib(n);
	
	getchar();
	return 0;
}

int fib(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else if (n > 1)
		return fib(n - 1) + fib(n - 2);	
}
