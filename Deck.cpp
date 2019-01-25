// Deck.cpp
// Created by Robin Rowe 2019-01-25
// License MIT open source

#include <stdio.h>
#include "Deck.h"

void Deck::Print(bool isNewline)
{	printf("Deck%c",isNewline ? '\n':' ');
} 
