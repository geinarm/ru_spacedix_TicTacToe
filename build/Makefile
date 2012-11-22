OBJS = counter.o main.o
OBJS_t = testCounter.o counter.o
CC = vc++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

all: p1 p2

p1: $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o p1

p2: $(OBJS_t)
	$(CC) $(LFLAGS) $(OBJS_t) -o p2

counter.o: ../src/counter.h ../src/counter.cpp
	$(CC) $(CFLAGS) ../src/counter.cpp

main.o: ../src/main.cpp
	$(CC) $(CFLAGS) ../src/main.cpp

#catch.o: ../test/catch.hpp
#	$(CC) $(CFLAGS) ../test/catch.hpp

testCounter.o: ../test/testCounter.cpp ../test/catch.hpp
	$(CC) $(CFLAGS) ../test/testCounter.cpp

clean:
	\rm *.o p1 p2

#tar:
#    tar cfv p1.tar Movie.h Movie.cpp Name.h Name.cpp NameList.h \
#            NameList.cpp  Iterator.cpp Iterator.h

#../test/catch.hpp ../src/counter.h ../src/counter.cpp