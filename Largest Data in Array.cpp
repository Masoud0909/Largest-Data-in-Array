#include <iostream>

using namespace std;
//a function to retrive the maximum data in an array using a pointer to the address of it
double* maximum(double* a, int size) {
	double* max = &a[0];
	for (int i = 1; i < size; i++) {
		if (a[i] > *max) {
			max = &a[i];
		}
	}
	return max;
}

int main()
{
	double data[] = { 1,-4,35,9,26 };
	double* max = maximum(data, 5);
	cout << *max << endl;//should print 35
	for (int i = 0; i < 5; i++) {
		cout << data[i] << " ";//array should remain unchanged
	}
}
