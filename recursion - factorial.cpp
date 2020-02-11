#include <iostream> // RECURSION - FACTORIAL 

using namespace std;

/* example: 

5! 
= 5 * 4! 
= 5 * 4 * 3! 
= 5 * 4 * 3 * 2! 
= 5 * 4 * 3 * 2 * 1! 
= 5 * 4 * 3 * 2 * 1 = 120

*/

unsigned int factorial(int);

int main()
{
	int a;
	
	cout << "Enter the number to calculate factorial: " << endl;
	cin >> a;
	cin.ignore();
	cout << "Factorial of " << a << " is equal to: " << factorial(a) << endl;
	
	getchar();
	return 0;
}

unsigned int factorial(int n)
{
	if (n == 0 || n == 1)
		return 1;
	else
		return n * factorial(n - 1);
}
