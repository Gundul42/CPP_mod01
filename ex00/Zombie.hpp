/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 10:36:27 by graja             #+#    #+#             */
/*   Updated: 2021/12/17 14:09:05 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>

class	Zombie
{
	private:
		std::string	_name;

	public:
		Zombie(std::string name);
		~Zombie(void);

		std::string	get_name(void);
		void			announce(void);
};

#endif
