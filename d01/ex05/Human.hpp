#ifndef HUMAN
 #define HUMAN
 #include "Brain.hpp"
 #include <iostream>
class Human
{
	public:
		const Brain *my_brain;
		Human *addr;
		std::string identify(void);
		Brain getBrain(void);
		Human(void);
		~Human(void);
};
#endif
