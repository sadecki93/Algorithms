#include <iostream> // ITERATION - FIBONACCI SEQUENCE

using namespace std;

/* in the Fibonacci sequence each number is the sum of the two preceding ones, starting from 0 and 1
	0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ...
*/

int main()
{
	unsigned int x, n;
	
	cout << "Enter element number of Fibonacci sequence to calculate: " << endl;
	cin >> x;
	cin.ignore();
	cout << endl;
	
	int a = 1, b = 1;
	
	if (x == 0)
		n = 0;
	else if (x == 1 || x == 2)
		n = 1;
	else
	{
		for (int i = 3; i <= x; i++)
		{
			n = a + b;
			a = b;
			b = n;
		}	
	}
	
	cout << "Element no. "	<< x << " of Fibonacci sequence is equal to: " << n;
	
	getchar();
	return 0;
}
