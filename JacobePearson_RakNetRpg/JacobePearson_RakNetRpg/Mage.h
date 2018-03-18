#pragma once
#include "Player.h"

class Mage : public Player
{
public:
	Mage();
	virtual void Heal();

private:
	int maxHp;
};
