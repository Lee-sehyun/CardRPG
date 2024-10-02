SFML_PATH = /usr/local/Cellar/sfml/2.6.1

Skill.o : unit/Skill/Skill.h unit/Skill/Skill.cpp
	g++ -c unit/Skill/Skill.cpp

Unit.o : unit/Unit.h unit/Unit.cpp
	g++ -c unit/Unit.cpp

Hero.o : unit/Hero.h unit/Hero.cpp
	g++ -c unit/Hero.cpp

Enemy.o : unit/Enemy.h unit/Enemy.cpp
	g++ -c unit/Enemy.cpp

Character.o : unit/Character.h unit/Character.cpp
	g++ -c unit/Character.cpp

# main.o : main.cpp Hero.o Enemy.o
# 	g++ -c main.cpp

# main : main.o Hero.o Enemy.o Unit.o Skill.o
# 	g++ Hero.o Enemy.o Unit.o Skill.o main.o -o main

debug.o : debug.cpp Hero.o Enemy.o Character.o Skill.o
	g++ -c debug.cpp -I$(SFML_PATH)/include -o bin/app -L$(SFML_PATH)/lib -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio -lsfml-network

main : debug.o Hero.o Enemy.o Unit.o Character.o Skill.o
	g++ Hero.o Enemy.o Unit.o Character.o Skill.o debug.o -o main