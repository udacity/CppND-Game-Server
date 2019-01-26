// Deck.cpp 
// Created by David Silver 2019-01-10
// License MIT open source

#include "Deck.h"

void Deck::Open()
{	top = (unsigned) cards.size();
	const unsigned suitCount = 4;
	const unsigned rankCount = 13;
	unsigned i = 0;
	for(unsigned suit = 0; suit < suitCount; ++suit)
	{	for(unsigned rank = 0; rank < rankCount; ++rank)
		{   cards[i++] = Card(rank+2,suit+1);
}   }   }

bool Deck::Swap(unsigned a,unsigned b)
{	if(a == b)
	{	return false;
	}
	const size_t i = top - 1;
	if(a > i || b > i)
	{	return false;
	}
	cards[a].Swap(cards[b]);
	return true;
}

void Deck::Print(bool isNewline) const
{   printf("Deck count = %zu, top = %u\n",cards.size(),top);
	unsigned i = 1;
    for(auto& card : cards)
    {   card.Print();
		if(i%13)
		{	printf(" ");
		}
		else
		{	puts("");
		}
		i++;
    }
    puts("");
}
