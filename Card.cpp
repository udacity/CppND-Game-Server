// Card.cpp
// Created by Robin Rowe 2019-01-25
// License MIT open source

#include <stdio.h>
#include "Card.h"

void Card::Print(bool isNewline)
{	printf("Card%c",isNewline ? '\n':' ');
} 
