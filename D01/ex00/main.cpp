/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pragolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 11:57:14 by pragolan          #+#    #+#             */
/*   Updated: 2019/06/06 13:47:13 by pragolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int main()
{
	Pony* heapPony = ponyOnTheHeap();
	Pony stackPony = ponyOnTheStack();

	heapPony->setPonyName("Small");
	heapPony->setPonyColor("Yellow");
	heapPony->setPonyToy("Tennis");

	stackPony.setPonyName("Big");
	stackPony.setPonyColor("Black");
	stackPony.setPonyToy("Ball");


	std::cout << "Pony on the heap Name, Color, and Toy " << heapPony->getPonyName() << std::endl;
	std::cout << heapPony->getPonyColor() << std::endl;
	std::cout << heapPony->getPonyToy() << std::endl;

	std::cout << "Pony on the stack Name, Color, and Toy " << stackPony.getPonyName() << std::endl;
	std::cout << stackPony.getPonyColor() << std::endl;
	std::cout << stackPony.getPonyToy() << std::endl;

	delete heapPony;
	return 0;
}	
