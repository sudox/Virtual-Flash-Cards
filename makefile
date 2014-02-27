all: vfc

vfc: main.o Card.o Deck.o
	g++ main.o Card.o Deck.o -o vfc

main.o: main.cpp
	g++ -c main.cpp

Card.o: Card.cpp
	g++ -c Card.cpp

Deck.o: Deck.cpp
	g++ -c Deck.cpp

clean:
	rm main.o Card.o Deck.o
