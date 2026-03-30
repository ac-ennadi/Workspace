/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   things.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 11:29:11 by acennadi          #+#    #+#             */
/*   Updated: 2026/03/30 11:29:12 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

//the namespace

///NOTE : we can use the name space is room
// we can solve the problem of name conflex

namespace room1 {
    void someone (void) {std::cout << "i am here";}
};

namespace room2 {
    void someone (void) {std::cout << "i am here";}
};