#include <iostream> // ITERATION - FINDING MINIMUM ELEMENT IN ARRAY DATA STRUCTURE

using namespace std;

int main()
{
	const int n = 5;
	int array[n];
	int min;
	
	for (int i = 0; i < n; i++)
	{
		cout << "Enter the element no. " << i+1 << ": " << endl;
		cin >> array[i];
		cin.ignore();
		if (i == 0)
			min = array[i];
		else if (array[i] < min)
			min = array[i];
	}
	
	cout << "The smallest given value is: " << min << endl;
	
	getchar();
	return 0;
}
