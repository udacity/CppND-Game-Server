// Chip.cpp
// Created by Robin Rowe 2019-01-25
// License MIT open source

#include <stdio.h>
#include "Chip.h"

void Chip::Print(bool isNewline)
{	printf("Chip%c",isNewline ? '\n':' ');
} 
