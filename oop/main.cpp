/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 11:29:05 by acennadi          #+#    #+#             */
/*   Updated: 2026/04/08 17:05:55 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "things.hpp"
#include <iostream>

void endl(void) {std::cout << std::endl;}

int main()
{
	//this was for the namespace 
	// room1::someone();
	// endl();
	// room2::someone();
	
	//this for class and some fundamental
	aboy p1("steve", 18);
	aboy p2("achraf", 21);

	// p1.name = "steve";
	// p1.age = 18;

	// p2.name = "achraf";
	// p2.age = 21;
	
	std::cout << "Name: " << p1.name;
	endl();
	std::cout << "Age: " << p1.age;
	endl();
	p1.print_it();
	
	endl();

	std::cout << "Name: " << p2.name;
	endl();
	std::cout << "Age: " << p2.age;
	endl();
	p2.print_it();
	return (0);
}