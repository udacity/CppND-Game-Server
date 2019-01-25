// Table.h 
// Created by Robin Rowe 2019-01-10
// License MIT open source

#ifndef Table_h
#define Table_h

#include <vector>
#include <string>
#include "Seat.h"
#include "Pot.h"
#include "blackjack/BlackjackDealer.h"

class Table
{//	Table(const Table&) = delete;
//	void operator=(const Table&) = delete;
	std::vector<Seat> seats;
	BlackjackDealer dealer;
	Pot pot;
	std::string tableName;
public:
	void Print(bool isNewline = true) const;
	bool Open(const char* tableName,unsigned seatCount);
	bool Dispatch(unsigned fromId,char* line);
	~Table()
	{}
	Table()
	{}
	bool operator!() const
	{	return !seats.size();
	}
	void Credit(Chip chips)
	{	pot.Credit(chips);
	}
	void Debit(Chip chips)
	{	pot.Debit(chips);
	}
};

#endif
