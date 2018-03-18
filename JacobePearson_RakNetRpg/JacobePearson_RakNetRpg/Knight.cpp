#include "Knight.h"

Knight::Knight() : Player()
{
	maxHp = 30;
	hp = maxHp;
	attack = 6;
	heal = 1;

	//type = fire;
}

void Knight::Heal()
{
	hp += 1;
	if (hp > maxHp)
	{
		hp = maxHp;
	}
}