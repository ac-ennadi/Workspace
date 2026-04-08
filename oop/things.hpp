/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   things.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 11:29:11 by acennadi          #+#    #+#             */
/*   Updated: 2026/04/08 16:56:40 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

///NOTE : Don't Forget to Comment the part u didn't working with

//this classes

class aboy {
    public:
        std::string name;
        int age;
    //member function is a function declared as a member of a class
    void print_it();
    aboy (std::string name, int age);
};

//the namespace

///NOTE : we can use the name space is room
// we can solve the problem of name conflex

namespace room1 {
    void someone (void) {std::cout << "i am here";}
};

namespace room2 {
    void someone (void) {std::cout << "i am here";}
};