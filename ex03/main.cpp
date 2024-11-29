/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 09:27:31 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/11/29 15:43:53 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

using std::cout;
using std::endl;

int main(void)
{
	{
		cout << "-----DEFAULT CONSTRUCTOR-----" << endl;
		DiamondTrap dt;
		dt.attack("target 1");
		dt.takeDamage(5);
		dt.beRepaired(3);
	}
	cout << endl;
	{
		cout << "-----STRING CONSTRUCTOR-----" << endl;
		DiamondTrap dt("E");
		dt.attack("target 1");
		dt.takeDamage(5);
		dt.beRepaired(3);
	}
	cout << endl;
	{
		cout << "-----COPY CONSTRUCTOR-----" << endl;
		DiamondTrap dt("E");
		DiamondTrap dt2(dt);
		cout << "_____dt_____: " << endl;
		dt.attack("target 1");
		dt.takeDamage(5);
		dt.beRepaired(3);
		cout << "_____dt2_____: " << endl;
		dt2.attack("target 1");
		dt2.takeDamage(5);
		dt2.beRepaired(3);
	}
	cout << endl;
	{
		cout << "-----ASSIGNATION OPERATOR-----" << endl;
		DiamondTrap dt("E");
		DiamondTrap dt2 = dt;
		cout << "_____dt_____: " << endl;
		dt.attack("target 1");
		dt.takeDamage(5);
		dt.beRepaired(3);
		cout << "_____dt2_____: " << endl;
		dt2.attack("target 1");
		dt2.takeDamage(5);
		dt2.beRepaired(3);
	}
	cout << endl;
	{
		cout << "-----HIT POINTS = 0-----" << endl;
		DiamondTrap dt;
		dt.takeDamage(10);
		dt.attack("target 1");
		dt.beRepaired(3);
	}
	cout << endl;
	{
		cout << "-----ENERGY POINTS = 0-----" << endl;
		DiamondTrap dt;
		for (int i = 0; i < 20; i++)
			dt.attack("target 1");
	}
	cout << endl;
	{
		cout << "-----GUARD GATE-----" << endl;
		DiamondTrap dt;
		dt.guardGate();
	}
	cout << endl;
	{
		cout << "-----HIGH FIVES GUYS-----" << endl;
		DiamondTrap dt;
		dt.highFivesGuys();
	}
	cout << endl;
	{
		cout << "-----WHO AM I-----" << endl;
		DiamondTrap dt("E");
	}
}
