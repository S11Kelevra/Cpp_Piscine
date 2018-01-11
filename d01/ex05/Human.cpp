#include "Human.hpp"

Human::Human(void)
{
}

Human::~Human(void)
{
}

std::string Human::identify(void)
{
	return(my_brain.identify());
}

const Brain &Human::getBrain(void)
{
	return(my_brain);
}
