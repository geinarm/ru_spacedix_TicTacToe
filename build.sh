cd gtest/make
make
./test_Player
./test_Board
./test_Game
./test_TicTacToe
make clean
cd ../../

cd build
make 
rm *.o
mv play ../../

echo "Testing game"
cd ../../
./play << EOF 
TestPlayer1
TestPlayer2
1
2
4
3
7
EOF

echo "Program exit code: " 
echo $?


