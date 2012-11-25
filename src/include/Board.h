#ifndef BOARD_H
#define BOARD_H

class Board{
public:
    Board();
    ~Board();
    void updateBoard(int player, int cell);
    int getCell(int cell);
    void printBoard();
private:
    int states[2];
    int winningStates[8];

};

#endif //BOARD_H