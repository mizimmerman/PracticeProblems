all: 

loops: loops.o
	g++ -Wall -g loops.cpp -o loops

strings: strings.o
	g++ -Wall -g strings.cpp -o strings 


clean:
	rm *.o loops strings
