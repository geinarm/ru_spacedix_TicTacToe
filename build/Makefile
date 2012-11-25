SRC_DIR = ../src
INCLUDE_DIR = ../src/include

play : main.o TicTacToe.o Player.o Game.o Board.o GameRunner.o counter.o 
	g++ main.o TicTacToe.o Player.o Game.o Board.o GameRunner.o counter.o  -o play

main.o : $(SRC_DIR)/main.cpp $(INCLUDE_DIR)/counter.h $(INCLUDE_DIR)/GameRunner.h 
	g++ -c $(SRC_DIR)/main.cpp

TicTacToe.o : $(SRC_DIR)/TicTacToe.cpp $(INCLUDE_DIR)/TicTacToe.h 
	g++ -c $(SRC_DIR)/TicTacToe.cpp

Player.o : $(SRC_DIR)/Player.cpp $(INCLUDE_DIR)/Player.h
	g++ -c $(SRC_DIR)/Player.cpp

Game.o : $(SRC_DIR)/Game.cpp $(INCLUDE_DIR)/Game.h $(INCLUDE_DIR)/Player.h
	g++ -c $(SRC_DIR)/Game.cpp

Board.o : $(SRC_DIR)/Board.cpp $(INCLUDE_DIR)/Board.h 
	g++ -c $(SRC_DIR)/Board.cpp

GameRunner.o : $(SRC_DIR)/GameRunner.cpp $(INCLUDE_DIR)/GameRunner.h
	g++ -c $(SRC_DIR)/GameRunner.cpp

counter.o : $(SRC_DIR)/counter.cpp $(INCLUDE_DIR)/counter.h $(INCLUDE_DIR)/Game.h $(INCLUDE_DIR)/Player.h
	g++ -c $(SRC_DIR)/counter.cpp
