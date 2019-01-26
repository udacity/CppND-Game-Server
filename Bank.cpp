// Bank.cpp
// Created by Robin Rowe 2019-01-25
// License MIT open source

#include <stdio.h>
#include "Bank.h"

void Bank::Print(bool isNewline) const
{	printf("%zu%c",chips,isNewline ? '\n':' ');
} 

bool Bank::Credit(Chip credit)
{	Chip sum = chips + credit;
	if(IsOverflow(sum))
	{	return false;
	}
	chips = sum;
	return true;
}
bool Bank::Debit(Chip withdrawl)
{	if(IsOverdraft(withdrawl))
	{	return false;
	}
	chips -= withdrawl;
	return true;
}
