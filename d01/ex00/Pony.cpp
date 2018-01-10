#include "Pony.hpp"

Pony::Pony(void)
{
		this->legs =  0;
}

Pony::~Pony(void)
{
		std::cout	<< "This is not the correct amount of legs, pony destroyed by your careless hands, you monster..."
					<< std::endl;
}

void Pony::ponyOnTheHeap(void)
{
		Pony *heapPony = new Pony;
		int i_legs;
		std::cout << "How many legs for this heap pony?" << std::endl;
		std::cin >> i_legs;
		heapPony->legs = i_legs;
		delete heapPony;
}

void Pony::ponyOnTheStack(void)
{
		Pony stackPony;
		int i_legs;
		std::cout << "How many legs for this stack pony?" << std::endl;
		std::cin >> i_legs;
		stackPony.legs =  i_legs;
}
