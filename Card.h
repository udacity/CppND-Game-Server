// Card.h 
// Created by Robin Rowe 2019-01-10
// License MIT open source

#ifndef Card_h
#define Card_h

#include <stdio.h>
#include <algorithm>

struct Card
{	char suit;
	char rank;
	short faceUp;
	enum RANK
	{	ten = 10,
		jack,
		queen,
		king,
		ace
	};
	enum SUIT
	{	club = 1,
		diamond, 
		heart, 
		spade
	};
	void Print(bool isNewline = true) const;
	~Card()
	{}
	Card()
	:	rank(0)
	,	suit(0)
	,	faceUp(false)
	{}
	Card(char rank,char suit,bool faceUp=false)
	:	rank(rank)
	,	suit(suit)
	,	faceUp(faceUp)
	{}
	bool operator !() const
	{	return !rank || rank > ace;		
	}
    bool operator<(const Card& h) const
    {	if(rank == h.rank)
		{	return suit < h.suit;
		}
		return rank < h.rank;
    }
	bool operator==(const Card& h) const
	{	return rank == h.rank && suit == h.suit;
	}
	void Clear()
	{	rank = 0;
		suit = 0;
		faceUp = false;
	}
	void Swap(Card& swap)
	{	std::swap(*this,swap);
	}
};

#endif
