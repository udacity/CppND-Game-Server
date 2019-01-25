// Seat.cpp
// Created by Robin Rowe 2019-01-25
// License MIT open source

#include <stdio.h>
#include "Seat.h"

void Seat::Print(bool isNewline)
{	printf("Seat%c",isNewline ? '\n':' ');
} 
