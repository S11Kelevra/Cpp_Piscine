#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
		int i;
		i = n;
		this->Horde = new Zombie[n];
		ZombieHorde::announce(Horde, n);
}

ZombieHorde::~ZombieHorde()
{
}

void ZombieHorde::announce(Zombie *Horde, int n)
{
	int i;
	i = -1;
	while (++i < n)
		Horde[i].Zombie::announce();
}
