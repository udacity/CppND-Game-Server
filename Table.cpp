// Table.cpp
// Created by Robin Rowe 2019-01-25
// License MIT open source

#include <stdio.h>
#include "Table.h"

void Table::Print(bool isNewline) const
{	printf("Table %s(%zu): ",tableName.c_str(),seats.size());
	for(auto& seat:seats)
	{	seat.Print();
		printf(" ");
	}
	if(isNewline)
	{	puts("");
	}
}

bool Table::Open(const char* tableName,unsigned seatCount)
{	if(!tableName)
	{	return false;
	}
	seats.resize(seatCount);
	unsigned i = 1;
	for(auto& seat:seats)
	{	seat.Open(this,i++);
	}
	this->tableName = tableName;
	return true;
}

bool Dispatch(unsigned fromId,char* line)
{

	return false;
}

