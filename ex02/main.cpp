/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 09:27:31 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/11/29 13:08:56 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

using std::cout;
using std::endl;

int main(void)
{
	{
		cout << "-----DEFAULT CONSTRUCTOR-----" << endl;
		FragTrap fragtrap;
		fragtrap.attack("target 1");
		fragtrap.takeDamage(5);
		fragtrap.beRepaired(3);
	}
	cout << endl;
	{
		cout << "-----STRING CONSTRUCTOR-----" << endl;
		FragTrap fragtrap("E");
		fragtrap.attack("target 1");
		fragtrap.takeDamage(5);
		fragtrap.beRepaired(3);
	}
	cout << endl;
	{
		cout << "-----COPY CONSTRUCTOR-----" << endl;
		FragTrap fragtrap("E");
		FragTrap fragtrap2(fragtrap);
		cout << "_____fragtrap_____: " << endl;
		fragtrap.attack("target 1");
		fragtrap.takeDamage(5);
		fragtrap.beRepaired(3);
		cout << "_____fragtrap2_____: " << endl;
		fragtrap2.attack("target 1");
		fragtrap2.takeDamage(5);
		fragtrap2.beRepaired(3);
	}
	cout << endl;
	{
		cout << "-----ASSIGNATION OPERATOR-----" << endl;
		FragTrap fragtrap("E");
		FragTrap fragtrap2 = fragtrap;
		cout << "_____fragtrap_____: " << endl;
		fragtrap.attack("target 1");
		fragtrap.takeDamage(5);
		fragtrap.beRepaired(3);
		cout << "_____fragtrap2_____: " << endl;
		fragtrap2.attack("target 1");
		fragtrap2.takeDamage(5);
		fragtrap2.beRepaired(3);
	}
	cout << endl;
	{
		cout << "-----HIT POINTS = 0-----" << endl;
		FragTrap fragtrap;
		fragtrap.takeDamage(10);
		fragtrap.attack("target 1");
		fragtrap.beRepaired(3);
	}
	cout << endl;
	{
		cout << "-----ENERGY POINTS = 0-----" << endl;
		FragTrap fragtrap;
		for (int i = 0; i < 20; i++)
			fragtrap.attack("target 1");
	}
	cout << endl;
	{
		cout << "-----HIGH FIVES GUYS-----" << endl;
		FragTrap fragtrap;
		fragtrap.highFivesGuys();
	}
}
