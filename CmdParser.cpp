// Router.cpp
// Created by Robin Rowe 2019-01-25
// License MIT open source

#include <stdio.h>
#include <sstream>
#include "Router.h"

void Router::Print(bool isNewline) const
{	printf("Router: %u%u%c",fromId,toId,isNewline ? '\n':' ');
} 

bool Router::Route(char* line)
{	// Format: FromId ToId Verb Params...
	std::istringstream is(line);
	fromId = 0;
	is >> fromId;
	toId = 0;
	is >> toId;
	if(!fromId || !toId)
	{	return false;
	}
	return true;
}

bool Router::Dispatch(Table& table)
{
	return false;
}
