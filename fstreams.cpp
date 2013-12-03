#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	srand(0);		//needed for random character generation

	ifstream file_in;
	ofstream file_out;

	int int_array[10];

	/* Associate the infile stream with a file */
	file_in.open("integers.txt");

	/* Read data from the file into an array */
	for(int i = 0; i < 10; i++) {
		file_in >> int_array[i];
	}

	/* Associate the outfile stream with a file */
	file_out.open("characters.txt");

	/* Write data to the file */
	for(int i = 0; i < 10; i++) {
		file_out << 'a' + rand()%26;	//writes a random character a-z
	}

	/* Close files */
	file_in.close();
	file_out.close();
	
	return 0;
}

