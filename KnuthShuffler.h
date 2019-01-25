// KnuthShuffler.h 
// Created by Robin Rowe 2019-01-18
// License MIT open source

#ifndef KnuthShuffler_h
#define KnuthShuffler_h

#include <random>

class Deck;

class KnuthShuffler
{	KnuthShuffler(const KnuthShuffler&) = delete;
	void operator=(const KnuthShuffler&) = delete;
    std::random_device rd;  
    std::mt19937 gen; 
public:
	void Print(bool isNewline = true) const;
	void Shuffle(Deck& deck);
	~KnuthShuffler()
	{}
	KnuthShuffler()
	:	gen(rd())
	{}
	bool operator!() const
	{	return true;
	}
};

#endif
