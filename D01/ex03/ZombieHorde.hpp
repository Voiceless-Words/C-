#ifndef ZOMBIEHORDE_H
#define ZOMBIEHORDE_H

#include "Zombie.hpp"

class ZombieHorde {

	public:
		ZombieHorde(int);
		~ZombieHorde();

		int getNumber();
	
	private:
		int _number;
};

#endif
