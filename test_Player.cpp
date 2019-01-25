// test_Player.cpp 
// Created by Robin Rowe 2019-01-11
// License MIT MIT open source

#include <stdio.h>
#include "../Player.h"

int main(int argc,char* argv[])
{	puts("Print Player");
	Player x(1,"Mr. Big",10000);
	x.Print();
	puts("\nDone!");
	return 0;
}
