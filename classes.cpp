#include <iostream>
using namespace std;

#include "classes.h"

/* Constructors */
FootballPlayer::FootballPlayer() {
	name = "none";
	height = 0;
	weight = 0;
	position = "none";
}

FootballPlayer::FootballPlayer(string n, int h, int w, string pos) {
	set_name(n);
	set_height(h);
	set_weight(w);
	set_position(pos);
}

/* TODO */

/* Setters */
void FootballPlayer::set_name(string n) {

}

void FootballPlayer::set_height(int h) {

}

void FootballPlayer::set_weight(int w) {

}

void FootballPlayer::set_position(string pos) {

}

/* Getters */
string FootballPlayer::get_name() {
	
}

int FootballPlayer::get_height() {

}

int FootballPlayer::get_weight() {

}

string FootballPlayer::get_position() {

}


/* Other functions */
void FootballPlayer::display_player() {

}



