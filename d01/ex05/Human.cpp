#include "Human.hpp"

Human::Human(void)
{
	this->my_brain = new Brain;
	this->my_brain->addr = &this->my_brain;
}

Human::~Human(void)
{
}

std::string Human::identify(void)
{
	std::string addr  = "Human";
	return(addr);
}

Brain Human::getBrain(void)
{
	return(*my_brain);
}
