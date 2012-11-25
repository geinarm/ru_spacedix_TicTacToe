#ifndef PLAYER_H
#define PLAYER_H
#include <string>

using namespace std;

class Player
{
<<<<<<< HEAD
    public:
        void setName(string playerName);
		string getName();
        void addWin();
		Player();
        ~Player();
    private:
		int score;
		string name;
=======
public:
    Player();
    ~Player();
    void setName(string playerName);
    string getName();
    void setId(string playerId);
    void addScore(int s);
    void addScore();
    int getScore();
private:
    int score;
    string name;
    string id;
>>>>>>> a63c3c5bf43190d6058b5d55dd8dff29447bf80e
};

#endif // PLAYER_H
