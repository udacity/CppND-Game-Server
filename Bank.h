// Bank.h 
// Created by Robin Rowe 2019-01-20
// License MIT open source

#ifndef Bank_h
#define Bank_h


#include <stdio.h>
#include "Chip.h"

class Bank
{//	Bank(const Bank&) = delete;
//	void operator=(const Bank&) = delete;
	Chip chips;
	bool IsOverflow(Chip sum) const
	{	return sum < chips;
	}
public:
	void Print(bool isNewline = true) const;
	bool Credit(Chip credit);
	bool Debit(Chip withdrawl);
	~Bank()
	{	chips = 0;
	}
	Bank()
	:	chips(0)
	{}
	Bank(Chip chips)
	:	chips(chips)
	{}
	bool operator!() const
	{	return !chips;
	}
	operator Chip() const
	{	return chips;
	}
	bool IsOverdraft(Chip withdrawl) const
	{	return withdrawl > chips;
	}
	Chip Rake()
	{	const Chip rake = chips;
		chips = 0;
		return rake;
	}
};

#endif
