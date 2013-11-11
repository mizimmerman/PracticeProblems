#include <iostream>
using namespace std;

int factorial(int);
int fibonacci(int);

int main() {
	//compute the factorial of 6
	int sixfactorial = factorial(6);
	cout << "6! = " << sixfactorial << endl;

	//compute the 5th fibonacci number
	int fifthfib = fibonacci(5);
	cout << "fib(5) = " << fifthfib << endl;
	return 0;
}

int factorial(int i) {
	if(i == 0 || i == 1) {
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
		cout << "I'm in the recursive case with " << i << endl;
		int minus1 = fibonacci(i-1);
		int minus2 = fibonacci(i-2);
		cout << "Returning " << minus1 << " + " << minus2 <<
		     " from recursive case with " << i << endl;
		return minus1 + minus2;
	}
}
