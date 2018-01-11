#include "Brain.hpp"

Brain::Brain()
{
	this->feelings = true;
}

Brain::~Brain(void)
{
}

std::string Brain::identify(void) const
{
	std::stringstream tmp;
	const void *addr = this;
	tmp << addr;
	return(tmp.str());
}
