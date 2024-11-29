/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 09:27:31 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/11/29 10:43:53 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

using std::cout;
using std::endl;

int main(void)
{
	{
		// Default constructor
		cout << "-----DEFAULT CONSTRUCTOR-----" << endl;
		ClapTrap claptrap;
		claptrap.attack("target 1");
		claptrap.takeDamage(5);
		claptrap.beRepaired(3);
	}
	cout << endl;
	{
		cout << "-----STRING CONSTRUCTOR-----" << endl;
		ClapTrap claptrap("E");
		claptrap.attack("target 1");
		claptrap.takeDamage(5);
		claptrap.beRepaired(3);
	}
	cout << endl;
	{
		cout << "-----COPY CONSTRUCTOR-----" << endl;
		ClapTrap claptrap("E");
		ClapTrap claptrap2(claptrap);
		cout << "_____claptrap_____: " << endl;
		claptrap.attack("target 1");
		claptrap.takeDamage(5);
		claptrap.beRepaired(3);
		cout << "_____claptrap2_____: " << endl;
		claptrap2.attack("target 1");
		claptrap2.takeDamage(5);
		claptrap2.beRepaired(3);
	}
	cout << endl;
	{
		cout << "-----ASSIGNATION OPERATOR-----" << endl;
		ClapTrap claptrap("E");
		ClapTrap claptrap2 = claptrap;
		cout << "_____claptrap_____: " << endl;
		claptrap.attack("target 1");
		claptrap.takeDamage(5);
		claptrap.beRepaired(3);
		cout << "_____claptrap2_____: " << endl;
		claptrap2.attack("target 1");
		claptrap2.takeDamage(5);
		claptrap2.beRepaired(3);
	}
	cout << endl;
	{
		cout << "-----HIT POINTS = 0-----" << endl;
		ClapTrap claptrap;
		claptrap.takeDamage(10);
		claptrap.attack("target 1");
		claptrap.beRepaired(3);
	}
	cout << endl;
	{
		cout << "-----ENERGY POINTS = 0-----" << endl;
		ClapTrap claptrap;
		for (int i = 0; i < 20; i++)
			claptrap.attack("target 1");
	}
}
