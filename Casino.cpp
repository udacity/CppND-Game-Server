// Casino.cpp
// Created by Robin Rowe 2019-01-17
// License MIT open source

#include <iostream>
#include <stdio.h>
#include <string.h>
#include "Router.h"
#include "Casino.h"

int Casino::Run()
{	strcpy(&line[0],"1 1 ");
	AddPlayer("Me");
	for(;;)
	{	std::cin.getline(&line[4],line.size()-4);
		if(!strcmp(&line[4],"quit"))
		{	puts("Goodbye");
			return 0;
		}
		if(strstr(&line[4],"add "))
		{	if(strstr(&line[8],"player "))
			{	AddPlayer(&line[15]);
			}
			if(strstr(&line[8],"table "))
			{	AddTable(&line[14]);
			}
			puts("Unknown command");
			continue;
		}
		if(strstr(&line[4],"show "))
		{	if(strstr(&line[9],"players"))
			{	PrintPlayers();
			}
			if(strstr(&line[9],"tables"))
			{	Print();
			}
			puts("Unknown command");
			continue;
		}
		if(router.Route(&line[0]))
		{	const unsigned toId = router.GetToId();
			if(IsInvalidTable(toId))
			{	puts("Unknown table");
				continue;
			}
			router.Dispatch(tables[toId],&line[0]);
			continue;
		}
		puts("Unknown command");
	}
	return 1;
}

void Casino::Print(bool isNewline) const
{   for(auto& table : tables)
    {   table.Print();
    }
	if(isNewline)
	{	puts("");
}	}


void Casino::PrintPlayers(bool isNewline) const
{   for(auto& player : players)
    {   player.Print();
    }
	if(isNewline)
	{	puts("");
}	}