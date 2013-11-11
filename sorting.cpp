#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

template <typename T>
void bubbleSort(vector<T> &vec);

template <typename T>
void mergeSort(vector<T> &vec);

template <typename T>
void printVector(vector<T> &vec);

int main() {
	srand(0);
	vector<int> vec1(10);
	vector<char> vec2(10);

	for(int i = 0; i < 10; i++) {
		vec1[i] = rand()%100;
		vec2[i] = 'a' + rand() % 26;
	}

	printVector(vec1);
	printVector(vec2);
	return 0;
}

template <typename T>
void bubbleSort(vector<T> &vec) {


}

template <typename T>
void mergeSort(vector<T> &vec) {


}

template <typename T>
void printVector(vector<T> &vec) {
	unsigned int i = 0;
	while(i < vec.size()-1) {
		cout << vec[i++] << ", ";
	}
	cout << vec[i] << endl;
}


