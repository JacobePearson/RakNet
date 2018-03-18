#include "Mage.h"

Mage::Mage() : Player()
{
	maxHp = 20;
	hp = maxHp;
	attack = 3;
	heal = 3;

	//type = grass;
}

void Mage::Heal()
{
	hp += 3;
	if (hp > maxHp)
	{
		hp = maxHp;
	}
}
