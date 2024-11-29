/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 10:49:44 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/11/29 12:16:28 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &other);
		~ScavTrap();

		ScavTrap &operator = (const ScavTrap &other);
		
		void	guardGate();
};

# endif
