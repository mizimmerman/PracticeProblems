#include <string>
using namespace std;

class FootballPlayer {
private:
	string name;		//the player's name
	int height;			//the player's height in inches
	int weight;			//the player's weight in pounds
	string position;	//the player's position, i.e. "runningback"
	
public:
	/* Constructors */
	FootballPlayer();
	FootballPlayer(string n, int h, int w, string pos);
	
	/* Setters */
	void set_name(string n);
	void set_height(int h);
	void set_weight(int w);
	void set_position(string pos);

	/* Getters */
	string get_name();
	int get_height();
	int get_weight();
	string get_position();

	/* Other functions */
	void display_player();	//Prints out the information of the player
};

