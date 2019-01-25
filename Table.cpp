// Table.cpp
// Created by Robin Rowe 2019-01-25
// License MIT open source

#include <stdio.h>
#include "Table.h"

void Table::Print(bool isNewline)
{	printf("Table%c",isNewline ? '\n':' ');
} 
