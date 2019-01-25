// test_Table.cpp 
// Created by Robin Rowe 2019-01-11
// License MIT MIT open source

#include <stdio.h>
#include "../Table.h"

int main(int argc,char* argv[])
{	puts("Print Table");
	Table table;
	if(!table.Open("Table 1",8))
	{	puts("Can't open table");
		return 1;
	}
	table.Print();
	puts("\nDone!");
	return 0;
}
