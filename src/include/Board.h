#ifndef BOARD_H
#define BOARD_H
using namespace std;

class Board{
public:
    Board();
    ~Board();
    void updateBoard(int player, int cell);
    int getCell(int cell);
    void printBoard();
    bool isFull();
    int getState(int player);
private:
    char boardLayout[9];
    int states[2];
};

#endif //BOARD_H
