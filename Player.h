// Player.h 
// Created by Robin Rowe 2019-01-10
// License MIT open source

#ifndef Player_h
#define Player_h
#include <string>
#include <stdio.h>
#include "Hand.h"
#include "Bank.h"

typedef int ID;
class Seat;
class Table;

class Player
{	Player(const Player&) = delete;
	void operator=(const Player&) = delete;
	ID id;
	std::string name;
	Bank bank;
	Seat* seat;
	Table* table;
public:
	bool SitDown(Table& table);
	bool StandUp();
	void Print() const;
	~Player()
	{}
	Player(ID id, const char* name, Chip chips)
	:	id(id)
	,	name(name)
	,	bank(chips)
	,	seat(0)
	,	table(0)
	{}
	bool operator!() const
	{	return !seat;
	}
	bool Debit(Chip chips)
	{	return bank.Debit(chips);		
	}
	bool Credit(Chip chips)
	{	return bank.Credit(chips);
	}
};

#endif
