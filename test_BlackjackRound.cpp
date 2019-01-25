// test_BlackjackRound.cpp 
// Created by Robin Rowe 2019-01-25
// License MIT MIT open source

#include <stdio.h>
#include "../BlackjackRound.h"

int main(int argc,char* argv[])
{	puts("Testing BlackjackRound");
	BlackjackRound aBlackjackRound;
	if(!aBlackjackRound)
	{	puts("BlackjackRound failed, operator! == true");
		return 1;
	}
	aBlackjackRound.Print();
	puts("\nDone!");
	return 0;
}
