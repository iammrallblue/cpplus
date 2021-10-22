#include <iostream>

using namespace std;

typedef unsigned int uint;

int main()
{
	uint nRows, nCols;
	cout << "Please enter the number of rows: ";
	cin >> nRows;
	cout << "Please enter the number of columns: ";
	cin >> nCols;

	// does not follow the strict C++ standard, portability not guaranteed
	//double arr2d[nRows][nCols];
	
	double** arr2d = new double* [nRows];	
	for (uint i = 0; i < nRows; i++) {
		arr2d[i] = new double [nCols];
	} // for

	for (uint i = 0; i < nRows; i++) {
		for (uint j = 0; j < nCols; j++) {
			arr2d[i][j] = (i+1) * (j+1);
			cout << arr2d[i][j] << '\t';
		} // for
		cout << endl;
	} //for	

	// deallocate the 2d array
	for (uint i = 0; i < nRows; i++) {
		delete[] arr2d[i];
	} // for
	delete[] arr2d;
} // main
