output: character.o sorcerer.o wizard.o main.o
	c++ character.o wizard.o sorcerer.o main.o -o output

main.o: main.cpp
	c++ -c main.cpp

character.o: character.cpp character.h
	c++ -c character.cpp

sorcerer.o: sorcerer.cpp sorcerer.h
	c++ -c sorcerer.o.cpp

wizard.o: wizard.cpp wizard.h
	c++ -c wizard.cpp

clean:
	rm *.o
