#pragma once
#include "Player.h"

class Bard : public Player
{
public:
	Bard();
	virtual void Heal();
private:
	int maxHp;
};
