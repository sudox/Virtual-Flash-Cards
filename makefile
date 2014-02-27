all: vfc

vfc: main.o
	g++ main.o -o vfc

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm main.o
