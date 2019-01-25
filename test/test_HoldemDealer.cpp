// test_HoldemDealer.cpp 
// Created by Robin Rowe 2019-01-11
// License MIT MIT open source

#include <stdio.h>
#include "../holdem/HoldemDealer.h"
#include "../Table.h"
#include "../Player.h"

int main(int argc,char* argv[])
{	puts("Print Dealer");
	Table table;
	HoldemDealer dealer(table);
	dealer.Print();
	ID id = 1;
	const char* name = "Mr. Fats";
	Chip chips = 100;
	Player player(id,name,chips);
	if(!player.SitDown(table))
	{	puts("Can't seat player");
		return 1;
	}
	if(!dealer.Deal(player,5))
	{	puts("Can't deal 5 cards");
		return 1;
	}
	player.Print();
	puts("\nDone!");
	return 0;
}
