// test_KnuthShuffler.cpp 
// Created by Robin Rowe 2019-01-18
// License MIT MIT open source

#include <stdio.h>
#include "../KnuthShuffler.h"
#include "../Deck.h"

int main(int argc,char* argv[])
{	puts("Print KnuthShuffler");
	KnuthShuffler shuffler;
	Deck deck(shuffler);
	deck.Print();
	deck.Shuffle();
	deck.Print();
	puts("\nDone!");
	return 0;
}
