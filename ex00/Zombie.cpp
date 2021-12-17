/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 10:35:24 by graja             #+#    #+#             */
/*   Updated: 2021/12/17 14:09:48 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string	Zombie::get_name(void)
{
	return (this->_name);
}

void		Zombie::announce(void)
{
	std::cout << "<" << this->_name << "> BraiiiiiiiiinnnzzzzZ" << std::endl;
}

Zombie::Zombie(std::string name): _name(name)
{
	this->announce();
}

Zombie::~Zombie(void)
{
	std::cout << "<" << this->_name << "> just died" << std::endl;
}
