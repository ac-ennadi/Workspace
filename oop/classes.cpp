/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classes.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 11:29:00 by acennadi          #+#    #+#             */
/*   Updated: 2026/04/08 16:56:22 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "things.hpp"

aboy::aboy(std::string name, int age)
{
    this->name = name;
    this->age = age;
    std::cout << "this is Constructor\n";
}

void aboy::print_it()
{
    std::cout << "UsingFunctionName: " << this->name << std::endl;
	std::cout << "UsingFunctionAge: " << this->age << std::endl;
}