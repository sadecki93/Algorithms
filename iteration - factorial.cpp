#include <iostream> // ITERATION - FACTORIAL

using namespace std;

/* example: 

5! 
= 5 * 4! 
= 5 * 4 * 3! 
= 5 * 4 * 3 * 2! 
= 5 * 4 * 3 * 2 * 1! 
= 5 * 4 * 3 * 2 * 1 = 120

*/

int main()
{
	int a;
	int n = 1;
	
	cout << "Enter the number to calculate factorial: " << endl;
	cin >> a;
	cin.ignore();
	
	for (int i = 1; i <= a; i++)
	{
		n = n * i;	
	}
	
	cout << "Factorial of " << a << " is equal to: " << n << endl;
	
	getchar();
	return 0;
}
