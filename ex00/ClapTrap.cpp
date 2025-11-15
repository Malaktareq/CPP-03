#include "ClapTrap.hpp" 

ClapTrap::ClapTrap(const std::string name)
{
    this->name = name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    std::cout << "ClapTrap " << name << " created!" << std::endl;
}

ClapTrap::ClapTrap()
{    
    this->name = "Default";
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    std::cout << "ClapTrap " << this->name << " created!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->name << " destroyed!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
    std::cout << "ClapTrap " << this->name << " copied!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
    
    if (this != &other) {
        this->name = other.name;
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
    }
    std::cout << "ClapTrap " << this->name << " assigned!" << std::endl;
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if (hitPoints == 0)
    {
        std::cout << name << " has no hit points left to attack!" << std::endl;
        return;
    }
    if (energyPoints == 0)
    {        
        std::cout << name << " has no energy points left to attack!" << std::endl;
        return;
    }
    std::cout << name << " attacks " << target << ", dealing " << attackDamage << " points of damage!" << std::endl;
    energyPoints--;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (hitPoints == 0)
    {
        std::cout << name << " cannot be repaired because it has no hit points!" << std::endl;
        return;
    }
    if (energyPoints == 0)
    {
        std::cout << name << " cannot be repaired because it has no energy points!" << std::endl;
        return;
    }
    energyPoints--;
    hitPoints += amount;
    std::cout << name << " has been repaired by " << amount << " hit points!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hitPoints <= 0) 
    {
        std::cout << name << " cannot take damage because it has no hit points!" << std::endl;
        return;
    }
    if (hitPoints <= amount) 
    {
        std::cout << name << " takes " << hitPoints << " damage and is now at 0 hit points!" << std::endl;
        hitPoints = 0;
    }
    else
    {
        hitPoints -= amount;
        std::cout << name << " takes " << amount << " damage and is now at " << hitPoints << " hit points!" << std::endl;
    }
}