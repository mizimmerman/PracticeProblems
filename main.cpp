#include <iostream>
using namespace std;

#include "classes.h"

int main() {
	FootballPlayer devin;
	FootballPlayer jake("Jake Butt", 78, 237, "Tight End");

	devin.display_player();
	cout << endl;
	jake.display_player();

	return 0;
}
