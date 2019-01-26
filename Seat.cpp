// Seat.cpp
// Created by Robin Rowe 2019-01-11
// License MIT open source

#include "Player.h"
#include "Table.h"
#include "Seat.h"

bool Seat::StandUp(bool isCredit)
{	if(!player || !table)
	{	return false;
	}
	if(isCredit)
	{	player->Credit(pot.Rake());
	}
	else
	{	table->Credit(pot.Rake());
	}
	player=0;
	return true;
}

void Seat::Print(bool isNewline) const
{	if(!player)
	{	printf("Seat: no player");
		return;
	}
	printf("%u[",seatNo);
	player->Print();
	printf("] ");
	pot.Print();
}
