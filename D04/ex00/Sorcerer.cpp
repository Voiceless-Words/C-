#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
{
	std::cout << name << ", " << title << ", is born !" << std::endl;
	_name = name;
	_title = title;
}

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same !" << std::endl;
}	
