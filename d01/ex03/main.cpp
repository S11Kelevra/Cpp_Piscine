#include "ZombieHorde.hpp"
#include "Zombie.hpp"

int main (void)
{
	ZombieHorde *zHorde = new ZombieHorde(5);
	delete zHorde;
	return(0);
}
