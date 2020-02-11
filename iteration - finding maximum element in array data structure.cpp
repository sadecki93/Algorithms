#include <iostream> // ITERATION - FINDING MAXIMUM ELEMENT IN ARRAY DATA STRUCTURE

using namespace std;

int main()
{
	const int n = 5;
	int array[n];
	int max;
	
	for (int i = 0; i < n; i++)
	{
		cout << "Enter the element no. " << i+1 << ": " << endl;
		cin >> array[i];
		cin.ignore();
		if (i == 0)
			max = array[i];
		else if (array[i] > max)
			max = array[i];
	}
	
	cout << "The biggest given value is: " << max << endl;
	
	getchar();
	return 0;
}
