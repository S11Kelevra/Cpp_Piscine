#ifndef	ZOMBIE_EVENT_HPP
 #define ZOMBIE_EVENT_HPP
 #include "Zombie.hpp"

class ZombieEvent
{
		public:
				ZombieEvent();
				~ZombieEvent();
				void randomChump(void);
				void setZombieType(Zombie* Zboy, std::string type);
				Zombie* newZombie(std::string name);
};
#endif

