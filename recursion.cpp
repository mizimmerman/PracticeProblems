#include <iostream>
using namespace std;

int factorial(int);
int fibonacci(int);
int power(int, int);

int main() {
	//compute the factorial of 6
	int sixfactorial = power(2, 5);
	cout << "2^5 = " << sixfactorial << endl;

	//compute the 5th fibonacci number
	/*int fifthfib = fibonacci(5);
	cout << "fib(5) = " << fifthfib << endl;
	return 0;*/
}

int factorial(int i) {
	if(i == 0) {
		cout << "I'm in the base case with " << i << endl;
		return 1;
	}
	else {
		cout << "I'm in the recursive case with " << i << endl;
		int returnval = factorial(i-1) * i;
		cout << "Returning " << returnval << 
		     " from recursive case with " << i << endl;
		return returnval;
	}
}

//fib(n) = fib(n-1) + fib(n-2)
//0, 1, 1 , 2 ,3, 5, 8, 13, 

int fibonacci(int i) {
	if(i == 0) {
		cout << "I'm in the base case with " << i << endl;
		return 0;
	}
	else if(i == 1) {
		cout << "I'm in the base case with " << i << endl;
		return 1;
	}
	else {
		return fibonacci(i-1) + fibonacci(i-2);
	}
}
/*n^x = n^x-1 * n*/
int power(int base, int exponent) {
	if(exponent == 0){
		return 1;
	}
	else {
		return power(base, exponent-1) * base;
	}
}

	


