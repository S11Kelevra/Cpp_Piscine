#ifndef ZOMBIE_HORDE
 #define ZOMBIE_HORDE
 #include "Zombie.hpp"

class ZombieHorde
{
		public:
				Zombie *Horde;
				ZombieHorde(int n);
				~ZombieHorde(void);
				void announce(Zombie *Horde, int n);
};
#endif
