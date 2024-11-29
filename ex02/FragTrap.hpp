/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:56:51 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/11/29 12:59:35 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& fragtrap);
		~FragTrap();
		
		FragTrap& operator = (const FragTrap& fragtrap);
		
		void highFivesGuys(void);
};

# endif
