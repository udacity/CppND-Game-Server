// Bank.cpp
// Created by Robin Rowe 2019-01-25
// License MIT open source

#include <stdio.h>
#include "Bank.h"

void Bank::Print(bool isNewline)
{	printf("Bank%c",isNewline ? '\n':' ');
} 
