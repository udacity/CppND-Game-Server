// test_Router.cpp 
// Created by Robin Rowe 2019-01-25
// License MIT MIT open source

#include <stdio.h>
#include "../Router.h"

int main(int argc,char* argv[])
{	puts("Testing Router");
	Router aRouter;
	if(!aRouter)
	{	puts("Router failed, operator! == true");
		return 1;
	}
	aRouter.Print();
	puts("\nDone!");
	return 0;
}
