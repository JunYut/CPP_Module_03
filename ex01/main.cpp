/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 09:27:31 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/11/29 12:50:01 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

using std::cout;
using std::endl;

int main(void)
{
	{
		cout << "-----DEFAULT CONSTRUCTOR-----" << endl;
		ScavTrap scavtrap;
		scavtrap.attack("target 1");
		scavtrap.takeDamage(5);
		scavtrap.beRepaired(3);
	}
	cout << endl;
	{
		cout << "-----STRING CONSTRUCTOR-----" << endl;
		ScavTrap scavtrap("E");
		scavtrap.attack("target 1");
		scavtrap.takeDamage(5);
		scavtrap.beRepaired(3);
	}
	cout << endl;
	{
		cout << "-----COPY CONSTRUCTOR-----" << endl;
		ScavTrap scavtrap("E");
		ScavTrap scavtrap2(scavtrap);
		cout << "_____scavtrap_____: " << endl;
		scavtrap.attack("target 1");
		scavtrap.takeDamage(5);
		scavtrap.beRepaired(3);
		cout << "_____scavtrap2_____: " << endl;
		scavtrap2.attack("target 1");
		scavtrap2.takeDamage(5);
		scavtrap2.beRepaired(3);
	}
	cout << endl;
	{
		cout << "-----ASSIGNATION OPERATOR-----" << endl;
		ScavTrap scavtrap("E");
		ScavTrap scavtrap2 = scavtrap;
		cout << "_____scavtrap_____: " << endl;
		scavtrap.attack("target 1");
		scavtrap.takeDamage(5);
		scavtrap.beRepaired(3);
		cout << "_____scavtrap2_____: " << endl;
		scavtrap2.attack("target 1");
		scavtrap2.takeDamage(5);
		scavtrap2.beRepaired(3);
	}
	cout << endl;
	{
		cout << "-----HIT POINTS = 0-----" << endl;
		ScavTrap scavtrap;
		scavtrap.takeDamage(10);
		scavtrap.attack("target 1");
		scavtrap.beRepaired(3);
	}
	cout << endl;
	{
		cout << "-----ENERGY POINTS = 0-----" << endl;
		ScavTrap scavtrap;
		for (int i = 0; i < 20; i++)
			scavtrap.attack("target 1");
	}
}
