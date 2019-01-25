// test_BlackjackScore.cpp 
// Created by Robin Rowe 2019-01-25
// License MIT MIT open source

#include <stdio.h>
#include "../BlackjackScore.h"

int main(int argc,char* argv[])
{	puts("Testing BlackjackScore");
	BlackjackScore aBlackjackScore;
	if(!aBlackjackScore)
	{	puts("BlackjackScore failed, operator! == true");
		return 1;
	}
	aBlackjackScore.Print();
	puts("\nDone!");
	return 0;
}
