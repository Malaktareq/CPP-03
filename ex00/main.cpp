#include "ClapTrap.hpp"
#include <iostream>

static void divider(const std::string& title) {
    std::cout << "\n==== " << title << " ====\n";
}

int main() {
    divider("Basic construction");
    ClapTrap a("ALPHA");
    ClapTrap b("BRAVO");

    divider("Copy & assignment");
    ClapTrap c(a);          // copy ctor
    b = c;                  // copy assign

    divider("Basic actions");
    a.attack("training dummy");
    a.takeDamage(3);
    a.beRepaired(2);

    divider("Energy depletion");
    // Drain all energy (default EP is 10 in most subjects)
    for (int i = 0; i < 11; ++i)
        a.attack("target " + std::string(i < 10 ? "ok" : "no-energy"));

    divider("Cannot repair without energy");
    a.beRepaired(5); // should fail if EP == 0

    divider("Taking big damage (to zero HP)");
    b.takeDamage(50);  // take more than max HP → should clamp to 0 / destroyed message
    b.attack("should-not-work");
    b.beRepaired(10);  // should not repair if HP == 0 (destroyed)

    divider("Normal flow on fresh ClapTrap");
    ClapTrap d("DELTA");
    d.attack("BOT-1");
    d.takeDamage(4);
    d.beRepaired(4);
    d.takeDamage(12);  // kill it
    d.takeDamage(1);   // already destroyed
    d.attack("BOT-2"); // cannot attack when destroyed
    d.beRepaired(3);   // cannot repair when destroyed

    divider("End of tests");
    return 0;
}
