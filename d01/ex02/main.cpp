#include "ZombieEvent.hpp"
#include "Zombie.hpp"

int main (void)
{
	ZombieEvent *Zboy = new ZombieEvent();
	Zboy->randomChump();
	Zombie *Zboy2 = new Zombie("Jimmy", "jim");
	Zboy2->announce();
	Zboy->setZombieType(Zboy2, "Carrey");
	Zboy2->announce();
	delete Zboy2;
	return(0);
}
