#pragma once
#include <string>



class Player
{
public:
	Player();
	void StartTurn();
	int Attack(Player* other);
	virtual void Heal() = 0;
	bool IsAlive() const;
	void SetName(std::string& name);
	std::string GetName() const;
	int GetHealth() const;
	int GetAttack() const;
	int GetHeal() const;

	void Die();
protected:
	std::string name;
	int hp;
	int attack;
	int heal;

};

