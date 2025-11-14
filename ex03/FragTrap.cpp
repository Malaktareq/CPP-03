#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap created!" << std::endl;
    this->name = "Default";
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
}

FragTrap::FragTrap(const std::string& name)
{
    std::cout << "FragTrap created with name: " << name << std::endl;
    this->name = name;
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
}
FragTrap& FragTrap::operator=(const FragTrap& other)
{
    std::cout << "FragTrap assignment operator called!" << std::endl;
    if (this != &other) {
        this->name = other.name;
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
    }
    return *this;
}
FragTrap::FragTrap(const FragTrap &other)
{
    std::cout << "FragTrap copy constructed!" << std::endl;
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
}
FragTrap::~FragTrap()
{
    std::cout << "FragTrap destroyed!" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap requests a high five!" << std::endl;
}