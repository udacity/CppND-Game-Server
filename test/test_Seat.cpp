// test_Seat.cpp 
// Created by Robin Rowe 2019-01-11
// License MIT MIT open source

#include <stdio.h>
#include "../Seat.h"
#include "../Table.h"

int main(int argc,char* argv[])
{	puts("Print Seat");
	Table table;
	HoldemDealer dealer(table);
	Seat seat(dealer);
	seat.Print();
	puts("\nDone!");
	return 0;
}
