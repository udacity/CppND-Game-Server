// Player.cpp
// Created by Robin Rowe 2019-01-10
// License MIT open source

#include "Player.h"
#include "Table.h"

bool Player::SitDown(Table& table)
{
	return false;
}

bool Player::StandUp()
{	
	return false;
}

void Player::Print() const
{	printf("%s", name.c_str());
}
