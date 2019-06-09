#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include <string>

class Sorcerer {

	public:
		Sorcerer(std::string name, std::string title);
		Sorcerer(const Sorcerer& copyConstructor);
		~Sorcerer(void);

		Sorcerer& operator=(const Sorcerer&);
	private:
		std::string _name;
		std::string _title;

};

std::ostream & operator<<(std::ostream & o, Sorcerer const & i);
#endif
