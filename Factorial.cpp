/* 
* Universidad del Valle de Guatemala
* Programación de microprocesadores
* Laboratorio 3 - Factorial 
* Andrés Chivalán, Luis Montenegro
*/
// C++ program to find
// factorial of given number
#include <iostream>
#include <omp.h>
using namespace std;

// Function to find factorial
// of given number

unsigned int factorial(unsigned int n){
	if (n == 0 || n == 1)
		return 1;
	return n * factorial(n - 1);
}


// Driver code
int main()
{
	int num, result;
    cin >> num;
	#pragma omp parallel master
	result = factorial(num);

	
	cout << "Factorial de: "<< num << " es: "<< result << endl;
	return 0;
}
// This code is contributed by Shivi_Aggarwal
