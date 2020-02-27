hepsi:derle program calistir

derle:
	g++ -I ./include/ -o ./lib/Dugum.o -c ./src/Dugum.cpp
	g++ -I ./include/ -o ./lib/main.o -c ./src/main.cpp
	
program:derle
	g++ ./lib/main.o ./lib/Dugum.o -o ./bin/program

calistir: program
	./bin/program