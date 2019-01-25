// test_Hand.cpp 
// Created by Robin Rowe 2019-01-11
// License MIT MIT open source

#include <stdio.h>
#include "../Hand.h"
#include "../Deck.h"

void Fill(Deck& deck,Hand& hand)
{	for(unsigned i = 0;i<hand.Size();i++)
	{	Card card = deck.Deal();
		hand.Add(card);
		printf("Add card ");
		card.Print();
		puts("");
}	}

int main(int argc,char* argv[])
{	puts("Print Hand");
	const unsigned size = 5;
	Hand hand(5);
	KnuthShuffler shuffler;
	Deck deck(shuffler);
	Fill(deck,hand);
	hand.Print();
	puts("");
	Card discard = hand.Discard(0);
	printf("Discarded ");
	discard.Print();
	puts("");
	hand.Print();
	puts("");
	hand.Clear();
	deck.Shuffle();
	Fill(deck,hand);
	hand.Print();
	puts("");
	puts("Sorting hand...");
	hand.Sort();
	hand.Print();
	puts("");
	puts("\nDone!");
	return 0;
}
