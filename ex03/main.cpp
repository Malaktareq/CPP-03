#include "DiamondTrap.hpp"

int main()
{
    std::cout << "\n===== Creating DiamondTrap =====\n";
    DiamondTrap d("Diamondy");

    std::cout << "\n===== Testing inherited values =====\n";
    std::cout << "Hit Points:      " << d.getHitPoints() << std::endl;
    std::cout << "Energy Points:   " << d.getEnergyPoints() << std::endl;
    std::cout << "Attack Damage:   " << d.getAttackDamage() << std::endl;

    std::cout << "\n===== Testing attack() (should be ScavTrap version) =====\n";
    d.attack("Malak");

    std::cout << "\n===== Testing whoAmI() =====\n";
    d.whoAmI();

    std::cout << "\n===== End of main, destroying object =====\n";
    return 0;
}

