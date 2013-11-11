all: 

loops: loops.o
	g++ -Wall -g loops.cpp -o loops

strings: strings.o
	g++ -Wall -g strings.cpp -o strings 

recursion: recursion.o
	g++ -Wall -g recursion.cpp -o recursion

sorting: sorting.o
	g++ -Wall -g sorting.cpp -o sorting

clean:
	rm *.o loops strings recursion sorting
