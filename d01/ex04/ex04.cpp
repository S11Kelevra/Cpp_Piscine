#include <iostream>

int main(void)
{
	std::string hi = "HI THIS IS BRAIN";
	std::string &ref = hi;
	std::string *ptr = &hi;

	std::cout << *ptr << std::endl;
	std::cout << ref <<std::endl;
	return(0);
}
