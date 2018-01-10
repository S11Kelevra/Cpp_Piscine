#include <iostream>

class Pony
{
		public:
				static void ponyOnTheHeap(void);
				static void ponyOnTheStack(void);
		private:
				Pony(void);
				~Pony(void);
				int legs;
};
