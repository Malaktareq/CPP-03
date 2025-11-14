#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() 
{
    std::cout << "DiamondTrap default constructor called" << std::endl;
    this->name = "Default";
    this->ClapTrap::name = this->name + "_clap_name";
}

DiamondTrap::DiamondTrap(const std::string& name) : FragTrap(name), ClapTrap(name + "_clap_name"), ScavTrap(name)
{
    this->name = name;
    std::cout << "DiamondTrap constructor called for " << name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
{
    this->name = other.name;
    this->ClapTrap::name = other.ClapTrap::name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;   
    this->attackDamage = other.attackDamage;
    std::cout << "DiamondTrap " << this->name << " copied!" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    if (this != &other) {
        this->name = other.name;
        this->ClapTrap::name = other.ClapTrap::name;
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
    }
    std::cout << "DiamondTrap " << this->name << " assigned!" << std::endl;
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << this->name << " destroyed!" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "Clap Trap name is: " << this->ClapTrap::name << std::endl;
    std::cout << "DiamondTrap name: " << this->name << std::endl;
}