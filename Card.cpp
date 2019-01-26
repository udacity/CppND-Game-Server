// Card.cpp
// Created by Robin Rowe 2019-01-25
// License MIT open source

#include <stdio.h>
#include "Card.h"

void Card::Print(bool isNewline) const
{	if(!*this)
	{	return;
	}
	const char* showRank = "0023456789TJQKA";
	const char* showSuit = "cdhs";
	printf("%c%c%c", showRank[rank],showSuit[suit],isNewline?'\n':' ');		
}
