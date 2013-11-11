#include <iostream>
#include <string>
using namespace std;

int main() {
	//declare two strings (is either of these wrong?)
	string first = "Michael";
	string second("Zimmerman");
	
	//assign the string "Michael Zimmerman" to full
	string full = /*??*/;

	//print the string full to standard output
	cout /*??*/;

	//what will print?
	if(first < second) {
		cout << "first < second\n";
	}
	else {
		cout << "second <= first\n";
	}

	string in;
	//input a string from standard input here
	cout << in << endl;

	//what if we want in to be an entire line of input?
	//do that here
	cout << in << endl;


	//Array notation
	
	//We can access strings just like we could access an array of chars
	//(because under the hood, that's what they actually are)
	char arr[4] = {'M', 'i', 'k', 'e'};
	string str = "Mike";
	if(arr[3] == str[3]) {
		cout << "both strings end in e\n";
	}
	else {
		cout << "the last element is not the same\n";
	}

	for(int i = 0; i < 4; i++) {
		//change str to hold "John" instead of Mike
		//change arr to hold "Jake" instead of Mike
	}

	cout << "str is: " << str << endl;
	cout << "arr is: " << arr[0] << arr[1] << arr[2] << arr[3] << endl;


	return 0;
}
