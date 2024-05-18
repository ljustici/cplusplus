
#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>
#include <iostream>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap &operator= (ClapTrap const &copy);

		std::string getName();
		int getAttackDmg();
		int getHitPts();
		int getEnergyPts();

		void setAttackDmg(int amount);
		void setHitPts(int amount);
		void setEnergyPts(int amount);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	private:
		std::string _name;
		int _hitPts;
		int _energyPts;
		int _attackDmg;
};

#endif