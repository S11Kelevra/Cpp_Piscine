#ifndef BRAIN
 #define BRAIN
 #include <iostream>
 #include <sstream>

class Brain
{
	public:
		int feelings;
		std::string identify(void) const;
		Brain(void);
		~Brain(void);
};
#endif
