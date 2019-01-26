// Hand.cpp
// Created by Robin Rowe 2019-01-10
// License MIT open source

#include "Hand.h"
#include "Deck.h"

void Hand::Print(bool isNewline) const
{	for(auto& card : cards)
	{	card.Print(false);
	}
	printf("%c",isNewline ? '\n':' ');
}

unsigned Hand::Draw(Deck& deck,unsigned howMany)
{	unsigned count = 0;
	for(unsigned i = 0;i<howMany;i++)
	{	if(!Pickup(deck.Deal()))
		{	return count;
	}	}
	return count;
}	

void Hand::Clear()
{	for(auto& card : cards)
	{	card.Clear();
	}
	count = 0;
}

bool Hand::Pickup(Card card)
{	if(IsFull())
	{	return false;
	}
	cards[count] = card;
	count++;
	return true;
}

Card Hand::Discard(unsigned i)
{	if(IsInvalid(i))
	{	return Card();
	}
	if(i!=count-1)
	{	cards[i].Swap(cards[count-1]);
	}
	Card discard = cards[count-1];
	cards[count-1].Clear();
	count--;
	return discard;
}
