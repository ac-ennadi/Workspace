/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   things.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 11:29:11 by acennadi          #+#    #+#             */
/*   Updated: 2026/04/08 17:05:51 by acennadi         ###   ########.fr       */
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
    
    //Constructor
    aboy (std::string name, int age);
    //Destructor
    ~aboy();
    void print_it();
};

//the namespace

///NOTE : we can use the name space is room
// we can solve the problem of name conflex

namespace room1 {
    void someone (void);
};

namespace room2 {
    void someone (void);
};