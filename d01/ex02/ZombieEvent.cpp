#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
}
ZombieEvent::~ZombieEvent(void)
{
}

void ZombieEvent::randomChump(void)
{
	Zombie Zed(Zombie::get_name(), Zombie::get_type());
	Zed.announce();
}

void ZombieEvent::setZombieType(Zombie* Zboy, std::string type)
{
	Zboy->set_type(type);
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	Zombie *Zboy = new Zombie(name, Zombie::get_type());
	return(Zboy);
}
