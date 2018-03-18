#include "Bard.h"

Bard::Bard() : Player()
{
	maxHp = 25;
	hp = maxHp;
	attack = 4;
	heal = 2;
	//type = water;
}

void Bard::Heal()
{
	hp += 2;
	if (hp > maxHp)
	{
		hp = maxHp;
	}
}