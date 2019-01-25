// test_BlackjackDealer.cpp 
// Created by Robin Rowe 2019-01-25
// License MIT MIT open source

#include <stdio.h>
#include "../BlackjackDealer.h"

int main(int argc,char* argv[])
{	puts("Testing BlackjackDealer");
	BlackjackDealer aBlackjackDealer;
	if(!aBlackjackDealer)
	{	puts("BlackjackDealer failed, operator! == true");
		return 1;
	}
	aBlackjackDealer.Print();
	puts("\nDone!");
	return 0;
}
