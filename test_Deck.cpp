// test_Deck.cpp 
// Created by Robin Rowe 2019-01-11
// License MIT MIT open source

#include <stdio.h>
#include "../Deck.h"
#include "../KnuthShuffler.h"

int main(int argc,char* argv[])
{	puts("Print Deck");
	KnuthShuffler shuffler;
	Deck deck(shuffler);
	deck.Print();
	puts("\nDone!");
	return 0;
}
