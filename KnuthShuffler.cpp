// KnuthShuffler.cpp
// Created by Robin Rowe 2019-01-18
// License MIT open source

#include <random>
#include "Deck.h"
#include "KnuthShuffler.h"

void KnuthShuffler::Print(bool isNewline) const
{	printf("KnuthShuffler ok");
}

void KnuthShuffler::Shuffle(Deck& deck)
{   deck.Open();
    unsigned top = deck.top;
    for(auto card : deck.cards)
    {   std::uniform_int_distribution<> dis(0,--top);
		const int random = dis(gen);
		deck.Swap(top,random);
}	}