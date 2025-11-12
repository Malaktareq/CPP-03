#include "ScavTrap.hpp"
#include <iostream>

int main() {
    std::cout << "=== Creating ClapTrap ===" << std::endl;
    ClapTrap clap("CLAPPY");

    std::cout << "\n=== Creating ScavTrap ===" << std::endl;
    ScavTrap scav("SCAVY");

    std::cout << "\n=== Testing ClapTrap ===" << std::endl;
    clap.attack("target dummy");
    clap.takeDamage(5);
    clap.beRepaired(3);

    std::cout << "\n=== Testing ScavTrap ===" << std::endl;
    scav.attack("evil robot");
    scav.takeDamage(20);
    scav.beRepaired(10);
    scav.guardGate(); // unique ScavTrap ability

    std::cout << "\n=== Energy Test ===" << std::endl;
    for (int i = 0; i < 5; ++i)
        scav.attack("training bot");

    std::cout << "\n=== Destructors will now be called automatically ===" << std::endl;

    return 0;
}
