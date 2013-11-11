#include <iostream>
#include <vector>
using namespace std;

int main() {
	//declare vectors and initialize
	vector<char> alphaVec(26);
	vector<int> intVec(10, 8);

	//loop over vectors
	
	//first, alphaVec needs values
	/*for(int x = 0; x < alphaVec.size(); x++) {
		//put the letters a-z into the vector
		alphaVec.at(x) = 'a' + x;
	}*/

	int y = 0;
	while(y < alphaVec.size()){
		alphaVec.at(y) = 'a' + y;
		y++;
	}

	/*x=0   1   2   3  4  5  6  7  8  9 10
	 * [a] [a] [a] [] [] [] [] [] [] [] []
	 */

	//next, what is in intVec?
	for(int x = 0; x < intVec.size(); x++) {
		//print each member of the vector on a new line
		cout << intVec.at(x) << endl;
	}

	for(int x = 0; x < alphaVec.size(); x++) {
		//print each member of the vector on a new line
		cout << alphaVec.at(x) << endl;
	}

	return 0;
}
