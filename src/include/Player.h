#ifndef PLAYER_H
#define PLAYER_H
#include <string>

using namespace std;

class Player
{
	public:
   		Player();
    	void setName(string playerName);
    	string getName();
    	void addScore();
    	int getScore();
	private:
    	int score;
    	string name;
};

#endif // PLAYER_H
