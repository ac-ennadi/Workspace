/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classes.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 11:29:00 by acennadi          #+#    #+#             */
/*   Updated: 2026/04/08 16:12:34 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "things.hpp"

void aboy::print_it()
{
    std::cout << "UsingFunctionName: " << this->name << std::endl;
	std::cout << "UsingFunctionAge: " << this->age << std::endl;
}