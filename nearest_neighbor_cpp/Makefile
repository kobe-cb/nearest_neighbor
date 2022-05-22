#Program: 8 Puzzle Solver Makefile

#Variables
#FLAGS = -g -W -Wall -Werror -ansi -pedantic
#OBJS = Diary.o Entry.o Genre.o Topic.o User.o

FLAGS = -W -Wall -Werror -ansi -pedantic
OBJS = Menu.o

#Targets
all: main.cpp $(OBJS)
	g++ $(FLAGS) -o NearestNeighbor.out main.cpp $(OBJS) -std=c++11

Menu.o: Menu/Menu.cpp Menu/Menu.hpp
	g++ $(FLAGS) -c Menu/Menu.cpp -std=c++11

clean:
	rm -rf *~ *.o NearestNeighbor.out
