// Casino.h 
// Created by Robin Rowe 2019-01-17
// License MIT open source

#ifndef Casino_h
#define Casino_h

#include <vector>
#include "Router.h"
#include "Bank.h"
#include "Table.h"
#include "Player.h"
#include "KnuthShuffler.h"

class Casino
{	Casino(const Casino&) = delete;
	void operator=(const Casino&) = delete;
	std::vector<Table> tables;
	std::vector<Player> players;
	KnuthShuffler knuthShuffler;
	Bank bank;
	Router router;
	std::array<char,80> line;
public:
	void Print(bool isNewline = true) const;
	int Run();
	bool AddPlayer(const char* line);
	bool AddTable(const char* table);
	~Casino()
	{}
	Casino()
	{}
	bool operator!() const
	{	return !tables.size() || !tables[0];
	}
};

#endif
