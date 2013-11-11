all: 

loop: loop.o
	g++ -Wall -g loop.cpp -o loop 



clean:
	rm *.o loop
