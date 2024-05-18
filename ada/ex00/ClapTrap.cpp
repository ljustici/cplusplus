
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hitPts(10), _energyPts(10), _attackDmg(0)
{
	std::cout << "Constructor called." << std::endl;
}


//Getters
std::string ClapTrap::getName()
{
	return(this->_name);
}

int ClapTrap::getAttackDmg()
{
	return (this->_attackDmg);
}

int ClapTrap::getEnergyPts()
{
	return(this->_energyPts);
}

int ClapTrap::getHitPts()
{
	return(this->_hitPts);
}

//Setters
void ClapTrap::setAttackDmg(int amount)
{
	this->_attackDmg = amount;
}

void ClapTrap::setHitPts(int amount)
{
	this->_hitPts = amount;
}

void ClapTrap::setEnergyPts(int amount)
{
	this->_energyPts = amount;
}

ClapTrap &ClapTrap:: operator= (ClapTrap const &copy)
{
	if (this != &copy)
	{
		this->_name = copy->getName();
		this->_attackDmg = copy->getAttackDmg();
		this->_energyPts = copy->getEnergyPts();
		this->_hitPts = copy->getHitPts();
	}
	return(*this);
}

void ClapTrap::attack (const std::string& target)
{
	std::cout << this->_name << " attacks " << &target << ", causing " << this->_attackDmg << " points of damage." << std::endl;
	this->_energyPts -= 1;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->_hitPts += amount;
	std::cout << this->_name << " repaired " << amount << " hit points." << std::endl;
	this->_energyPts -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPts > 0)
	{
		this->_hitPts -= amount;
		std::cout << this->_name << " lost " << amount << " hit points." << std::endl;
	}
	else
		std::cout << this->_name << " cannot lose any more hit points. Beating a dead horse!!" << std::endl;
}