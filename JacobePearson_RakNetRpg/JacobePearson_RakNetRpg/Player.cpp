#include "Player.h"

Player::Player()
{

}

void Player::StartTurn()
{

}

int Player::Attack(Player* other)
{
	int damage;
	damage = (float)attack;


	if (damage <= 0)
	{
		damage = 1;
	}
	other->hp -= damage;
	return damage;
}


bool Player::IsAlive() const
{
	return hp > 0;
}

void Player::SetName(std::string& nm)
{
	name = nm;
}

std::string Player::GetName() const
{
	return name;
}

int Player::GetHealth() const
{
	return hp;
}

int Player::GetAttack() const
{
	return attack;
}

int Player::GetHeal() const
{
	return heal;
}



void Player::Die()
{
	hp = 0;
}