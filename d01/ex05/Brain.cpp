#include "Brain.hpp"

Brain::Brain()
{
	this->feelings = true;
}

Brain::~Brain(void)
{
}

std::string Brain::identify(void)
{
	return(*addr);
}
