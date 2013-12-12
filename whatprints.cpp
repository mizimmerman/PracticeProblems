#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
using namespace std;

void conditionalsAndPredicates();

void loops();

void stringsAndArrays();

int get_which_answers();

void print_answers(int);

const int CNP = 0;
const int LOOPS = 3;
const int SNA = 7;
const int NUMQS = 9;

int main() {
	char choice;
	string junk;
	bool bad_input = true;

	for(;;) {
		cout << "See output or show answers?\n";
		cout << "(O)utput\n(A)nswers\n(Q)uit\n";
		cin >> choice;
		getline(cin, junk);
		choice = toupper(choice);
		if(choice == 'O') {
			cout << "Remove loops (in case of infinite)? y/n: ";
			cin >> choice;
			getline(cin, junk);
			choice = toupper(choice);
			bad_input = false;
			conditionalsAndPredicates();
			cout << endl << endl << endl;
			if(choice == 'N') {
				loops();
				cout << endl << endl << endl;
			}
			stringsAndArrays();
			cout << endl << endl << endl;
		} else if(choice == 'A') {
			bad_input = false;
			int num = get_which_answers();
			print_answers(num);
		} else if(choice == 'Q') {
			break;
		} else {
			cout << "Bad input\n\n";
		}
	}
	return 0;
}

void conditionalsAndPredicates() {
	const bool T = true;
	const bool F = false;
	const int one = 1;
	const int three = 3;
	const int four = 4;

	if(T && F || T) {
		cout << '1';
	}
	if((T || (T && F)) || F) {
		cout << '2';
	}
	if(T && F || F && F) {
		cout << '3';
	}
	/* What prints?
	 * a) 123
	 * b) 1
	 * c) 12
	 * d) 2
	 * e) None of the above
	 */
	cout << endl;

	if(one < three) {
		cout << '1';
	} else if(four >= three + one) {
		cout << '2';
	} else if(one > three) {
		cout << '3';
	} else {
		cout << '4';
	}
	/* What prints?
	 * a) 1
	 * b) 12
	 * c) 124
	 * d) 34
	 * e) None of the above
	 */
	cout << endl;

	if(one == 1 && three != four - one) {
		cout << '1';
	} else if(four >= three + 2 * one) {
		cout << '2';
	} else if((T || four != four) && F) {
		cout << '3';
	} else {
		cout << '4';
	}
	/* What prints?
	 * a) 1
	 * b) 12
	 * c) 124
	 * d) 3
	 * e) None of the above
	 */
	cout << endl;
}

void loops() {
	
	for(int i = 0; i < 9; i +=2) {
		if(i % 2 == 0) {
			cout << 'e';
		} else {
			cout << 'o';
		}
	}
	/* What prints?
	 * a) eeeee
	 * b) eoeoeoeoeo
	 * c) ooooo
	 * d) Infinite loop
	 * e) None of the above
	 */
	cout << endl;

	for(int i = 10; i < 0; i--) {
		cout << '1';
	}
	/* What prints?
	 * a) Ten 1's
	 * b) Nine 1's
	 * c) Nothing
	 * d) Infinite loop
	 * e) None of the above
	 */
	cout << endl;

	int j = 0;
	while(j < 10) {
		cout << '1';
	}
	/* What prints?
	 * a) Ten 1's
	 * b) Nine 1's
	 * c) Nothing
	 * d) Infinite loop
	 * e) None of the above
	 */
	cout << endl;

	int k = 0;
	while(k < 10) {
		k++;
	}
	cout << "k = " << k;
	/* What prints?
	 * a) Compile error
	 * b) k = 9
	 * c) k = 10
	 * d) Infinite loop
	 * e) None of the above
	 */
	cout << endl;
}

void stringsAndArrays() {
	const string NAME = "Michael";
	int integers[5] = {0, 1, 2, 3, 4};


	if(NAME[1] == 'M') {
		cout << 'M';
	}
	/* What prints?
	 * a) Compile error
	 * b) Runtime error/undefined behavior
	 * c) M
	 * d) Nothing
	 * e) None of the above
	 */
	cout << endl;

	for(int i = 0; i <= 5; i++) {
		cout << integers[i] << ' ';
	}
	/* What prints?
	 * a) Compile error
	 * b) Runtime error/undefined behavior
	 * c) 0 1 2 3 4 
	 * d) 0 1 2 3 4 5
	 * e) None of the above
	 */
	cout << endl;
}

int get_which_answers() {
	char answer;
	string junk;
	for(;;) {
		cout << "Which answers would you like?\n";
		cout << "(C)onditionals and predicates\n";
		cout << "(L)oops\n";
		cout << "(S)trings and arrays\n";

		cin >> answer;
		getline(cin, junk);
		answer = toupper(answer);
		if(answer == 'C')
			return CNP;
		else if(answer == 'L')
			return LOOPS;
		else if(answer == 'S') 
			return SNA;
		else
			cout << "Bad input\n\n";
	}
}

void print_answers(int questionbegin) {
	char answers[NUMQS];
	ifstream ifs;
	ifs.open("answers.txt");
	for(int i = 0; i < NUMQS; ++i) {
		ifs >> answers[i];
	}
	ifs.close();

	int num = 0;
	if(questionbegin == CNP) {
		num = 3;
	} else if(questionbegin == LOOPS) {
		num = 4;
	} else if(questionbegin == SNA) {
		num = 2;
	}
	
	for(int i = questionbegin; i < questionbegin + num; ++i) {
		cout << "Question " << i << ") " << answers[i] << endl;
	}
}

