#ifndef PLAYER_H
#define PLAYER_H
#include <string>

using namespace std;

class Player
{
    int score;
    string name;
    string id;

    public:
        virtual void setName(string playerName);
        virtual void setId(string playerId);
        Player();
        virtual ~Player();
    private:

};

#endif // PLAYER_H
