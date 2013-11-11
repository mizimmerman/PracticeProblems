#include <iostream>
#include <string>
using namespace std;
void printCharArr(char arr[4]);

int main() {
	//declare two strings (is either of these wrong?)
	string first = "Michael";
	string second("Zimmerman");
	
	//assign the string "Michael Zimmerman" to full
	string full = first + " " + second;

	//print the string full to standard output
	cout << full << endl;

	//what will print?
	if(first < second) {
		cout << "first < second\n";
	}
	else {
		cout << "second <= first\n";
	}

	string in;
	cout << "Input a string: ";
	cin >> in;
	cout << in << endl;

	//what if we want in to be an entire line of input?
	getline(cin,in);
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

	for(int x = 0; x < 4; x++) {
		//change str to hold "aaaa" instead of Mike
		str.at(x) = 'a';
		//change arr to hold "bbbb" instead of Mike
		arr[x] = 'b';
		cout << str << " ";
		printCharArr(arr);
		cout << endl;
	}

	cout << "str is: " << str << endl;
	cout << "arr is: ";
	printCharArr(arr);
	cout << endl;


	return 0;
}

void printCharArr(char arr[4]) {

	for(int i = 0; i < 4; i++) {
		cout << arr[i];
	}
}
