#ifndef ZOMBIE
 #define ZOMBIE
 #include <iostream>
 #include <cstdlib>
 #include <ctime>

class Zombie
{
	public:
			Zombie(std::string name, std::string type);
			~Zombie(void);
			static std::string get_name(void);
			static std::string get_type(void);
			void announce(void);
			static int randomish(void);
			void set_type(std::string type);
	private:
			std::string z_name, z_type;
};
#endif
