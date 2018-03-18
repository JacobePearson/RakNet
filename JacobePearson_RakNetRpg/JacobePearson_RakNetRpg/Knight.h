#pragma once
#include "Player.h"

class Knight : public Player
{
public:
	Knight();
	virtual void Heal();

private:
	int maxHp;
};

