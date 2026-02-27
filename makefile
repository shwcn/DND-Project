output: character.o sorcerer.o wizard.o warrior.o main.o utility.o
	c++ character.o wizard.o warrior.o sorcerer.o main.o utility.o -o output

main.o: main.cpp
	c++ -c main.cpp

utility.o: utility.cpp utility.h
	c++ -c utility.cpp

character.o: character.cpp character.h
	c++ -c character.cpp

warrior.o: warrior.cpp warrior.h
	c++ -c warrior.cpp

sorcerer.o: sorcerer.cpp sorcerer.h
	c++ -c sorcerer.cpp

wizard.o: wizard.cpp wizard.h
	c++ -c wizard.cpp

clean:
	rm *.o
