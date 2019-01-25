// Player.cpp
// Created by Robin Rowe 2019-01-25
// License MIT open source

#include <stdio.h>
#include "Player.h"

void Player::Print(bool isNewline)
{	printf("Player%c",isNewline ? '\n':' ');
} 
