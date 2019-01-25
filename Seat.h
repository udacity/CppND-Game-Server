// Seat.h 
// Created by Robin Rowe 2019-01-11
// License MIT open source

#ifndef Seat_h
#define Seat_h

#include "Pot.h"
class Player;
class Table;

class Seat
{//	Seat(const Seat&) = delete;
//	void operator=(const Seat&) = delete;
	unsigned seatNo;
	Player* player;
	Table* table;
	Pot pot;
public:
	void Print(bool isNewline = true) const;
	bool StandUp(bool isCredit = false);
	~Seat()
	{}
	Seat()
	:	seatNo(0)
	,	player(0)
	,	table(0)
	{}
	bool Open(Table* table,unsigned seatNo)
	{	if(!seatNo || !player || !table)
		{	return false;
		}
		this->seatNo = seatNo;
		this->table = table;
		return true;
	}
	bool operator!() const
	{	return !table;
	}
	Player* SeatedPlayer()
	{	return player;
	}	
	bool SitDown(Player* player)
	{	if(SeatedPlayer())
		{	return false;
		}
		this->player = player;
		return true;
	}
};

#endif
