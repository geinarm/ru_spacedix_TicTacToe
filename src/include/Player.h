#ifndef PLAYER_H
#define PLAYER_H
#include <string>

using namespace std;

class Player
{
	public:
   		Player();
    	~Player();
    	void setName(string playerName);
    	string getName();
    	void addScore(int s);
    	void addScore();
    	int getScore();
	private:
    	int score;
    	string name;
    	string id;
};

#endif // PLAYER_H
