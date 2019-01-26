// Timer.cpp
// Created by Robin Rowe 2019-01-25
// License MIT open source

#include <stdio.h>
#include "Timer.h"

void Timer::Print(bool isNewline) const
{	printf("Timer%c",isNewline ? '\n':' ');
} 
