#include <iostream>
#include <vector>
using namespace std;

const int SIZE = 25;

void print_vector(vector<int> &vec);

int main() {
	
	vector<int> int_vec(SIZE);

	for(int i = 0; i < SIZE/2; i++) {
		int_vec.at(i) = i * 2;
	}

	for(int j = SIZE/2; j < SIZE; j++) {
		int_vec[j] = j * 3;
	}

	/* TODO */
	/* Questions:
	 * Describe the container:
	 ** Type = 
	 ** Name =
	 ** Size = 
	 * What variables are used to loop over the container?
	 * When do each of the loops terminate?
	 * What is happening in each loop?
	 * What is the end result of the container?
	 */

	 /* Exercise: 
	  * Re-write the elements of the container with the numbers 3, 4, ..., SIZE + 3
	  */

	return 0;
}

void print_vector(vector<int> &vec) 
{
	cout << "Contents of vector: "
	for(unsigned int i = 0; i < vec.size(); ++i) {
		cout << vector[i] << ' ';
	}
	cout << endl;
}