// Deck.h 
// Created by Robin Rowe 2019-01-10
// License MIT open source

#ifndef Deck_h
#define Deck_h

#include <vector>
#include "Card.h"
#include "KnuthShuffler.h"

class Deck
{	friend class KnuthShuffler;
	Deck(const Deck&) = delete;
	void operator=(const Deck&) = delete;
	KnuthShuffler& knuthShuffler;
	unsigned top;
	std::vector<Card> cards;
	bool Swap(unsigned a,unsigned b);
public:
	void Print(bool isNewline = true) const;
	void Open();
	~Deck()
	{}
	Deck(KnuthShuffler& knuthShuffler,unsigned count = 52)
	:	knuthShuffler(knuthShuffler)
	,	top(count)
	,	cards(count)
	{	Open();
	}
	bool operator!() const
	{	return !top;
	}
	void Shuffle()
	{	knuthShuffler.Shuffle(*this);
	}
	Card Deal()
	{	if(!top)
		{	return Card();
		}
		return cards[--top];
	}
};

#endif
