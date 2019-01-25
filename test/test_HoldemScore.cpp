// test_HoldemScore.cpp 
// Created by Robin Rowe 2019-01-21
// License MIT MIT open source

#include <stdio.h>
#include "../holdem/HoldemScore.h"
#include "../Hand.h"
#include "../KnuthShuffler.h"
#include "../Deck.h"

void ScoreHand(Deck& deck)
{	Hand hand(5);
	hand.Draw(deck,5);
	hand.Print();
	printf(" ");
	HoldemScore score(hand);
	score.Print();
	puts("");
}

int main(int argc,char* argv[])
{	puts("Print HoldemScore");
	KnuthShuffler shuffler;
	Deck deck(shuffler);
	for(unsigned i = 0;i<5;i++)
	{	ScoreHand(deck);
	}
	puts("\nDone!");
	return 0;
}
