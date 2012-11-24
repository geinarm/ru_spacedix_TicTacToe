#ifndef BOARD_H
#define BOARD_H


class Board
{
    int BOARDSIZE;
    char board[9];
    public:
        Board();
        Board(int boardSize);
        virtual ~Board();
        void initialize();
    protected:
    private:
};

#endif // BOARD_H




