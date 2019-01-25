// Hand.h 
// Created by Robin Rowe 2019-01-10
// License MIT open source

#ifndef Hand_h
#define Hand_h
#include <vector>
#include <algorithm>
#include "Card.h"

class Deck;

class Hand
{	// Hand(const Hand&) = delete;
	// void operator=(const Hand&) = delete;
	std::vector<Card> cards;
	unsigned count;
public:
	void Clear();
	void Print(bool isNewline = true) const;
	unsigned Draw(Deck& deck,unsigned howMany);
	bool Pickup(Card card);
	Card Discard(unsigned i);
	~Hand()
	{}
	Hand(unsigned size)
	:	cards(size)
	,	count(0)
	{}
	bool operator!() const
	{	return !count;
	}
	unsigned Count() const
	{	return count;
	}
	unsigned Size() const
	{	return (unsigned) cards.size();
	}
	bool IsFull() const
	{	return count >= cards.size();
	}
	bool IsInvalid(unsigned i) const
	{	return i >= count;
	}
	void Sort()
	{	std::make_heap(cards.begin(),cards.end());
		std::sort_heap(cards.begin(),cards.end());
	}
};

#endif