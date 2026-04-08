/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   things.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 11:29:11 by acennadi          #+#    #+#             */
/*   Updated: 2026/04/08 16:14:09 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

//this classes

class aboy {
    public:
        std::string name;
        int age;
    //member function is a function declared as a member of a class
    void print_it();
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