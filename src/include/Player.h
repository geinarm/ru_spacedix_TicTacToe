#ifndef PLAYER_H
#define PLAYER_H
#include <string>

using namespace std;

class Player
{
    public:
        void setName(string playerName);
		string getName();
        void addWin();
		Player();
        ~Player();
    private:
		int score;
		string name;
};

#endif // PLAYER_H
