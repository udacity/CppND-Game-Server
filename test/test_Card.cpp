// test_Card.cpp 
// Created by Robin Rowe 2019-01-11
// License MIT MIT open source

#include "../Card.h"
#include <locale.h>

int main(int argc,char* argv[])
{	puts("Print Card");
	setlocale(LC_ALL,"");
	Card x(Card::ace,Card::spade);
	x.Print();
	puts("\nDone!");
	return 0;
}
