// test_Seat.cpp 
// Created by Robin Rowe 2019-01-11
// License MIT MIT open source

#include <stdio.h>
#include "../Seat.h"
#include "../Table.h"

int main(int argc,char* argv[])
{	puts("Print Seat");
	Table table;
	if(!table.Open("Table 1",1))
	{	puts("Can't open table");
		return 1;
	}
	Seat seat;
	if(!seat.Open(&table,1))
	{	puts("Can't open seats");
		return 1;
	}
	seat.Print();
	puts("\nDone!");
	return 0;
}
