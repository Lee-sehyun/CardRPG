Unit.o : unit/Unit.h unit/Unit.cpp
	g++ -c unit/Unit.cpp

Hero.o : unit/Hero.h unit/Hero.cpp
	g++ -c unit/Hero.cpp

Enemy.o : unit/Enemy.h unit/Enemy.cpp
	g++ -c unit/Enemy.cpp

main.o : main.cpp Hero.o Enemy.o
	g++ -c main.cpp

main : main.o Hero.o Enemy.o Unit.o
	g++ Hero.o Enemy.o Unit.o main.o -o main