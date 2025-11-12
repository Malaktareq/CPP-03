#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

static void divider(const std::string &title)
{
    std::cout << "\n===== " << title << " =====" << std::endl;
}

int main()
{
    divider("Creating ClapTrap");
    ClapTrap clap("CLAPPY");

    divider("Creating ScavTrap");
    ScavTrap scav("SCAVY");

    divider("Creating FragTrap");
    FragTrap frag("FRAGGY");

    divider("Basic actions");
    clap.attack("Training Dummy");
    clap.takeDamage(5);
    clap.beRepaired(2);

    divider("ScavTrap in action");
    scav.attack("Evil Bot");
    scav.takeDamage(30);
    scav.beRepaired(15);
    scav.guardGate();

    divider("FragTrap in action");
    frag.attack("Big Boss");
    frag.takeDamage(50);
    frag.beRepaired(25);
    frag.highFivesGuys(); // FragTrap’s unique function

    divider("Energy drain test");
    for (int i = 0; i < 5; ++i)
        frag.attack("Target Dummy");

    divider("Testing inheritance consistency");
    // FragTrap should still use ClapTrap methods normally
    frag.takeDamage(100);
    frag.beRepaired(10);

    divider("End of program (destructors will be called)");
    return 0;
}
