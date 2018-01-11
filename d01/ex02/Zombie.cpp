#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
	this->z_name = name;
	this->z_type = type;
}

Zombie::~Zombie(void)
{
		std::cout << "Zombie killed!" << std::endl;
}

std::string	Zombie::get_name(void)
{
	std::string names[5] = {"Steve", "Stevey", "Stephen", "Steph", "Steve-o"};

	int i = Zombie::randomish();
	return(names[(i % 5)]);
}

std::string	Zombie::get_type(void)
{
	std::string types[5] = {"Boomer", "Hunter", "Spitter", "Jockey", "Witch"};

	int j = Zombie::randomish();
	return(types[(j % 5)]);
}

void Zombie::announce(void)
{
	std::cout	<< "<" << this->z_name << " "
				<< "(" << this->z_type << ")>"
				<< " Braiiiiiiiinssssss....."
				<< std::endl;
}

int Zombie::randomish(void)

{
	time_t t = time(NULL);
	return(t);
}

void Zombie::set_type(std::string type)
{
	this->z_type = type;
}
