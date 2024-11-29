/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 10:49:47 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/11/29 13:05:19 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

using std::cout;
using std::endl;
using std::string;

ScavTrap::ScavTrap()
{
	cout << "ScavTrap default constructor" << endl;
	_name = "scava trappa";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(string name)
{
	cout << "ScavTrap constructor with name" << endl;
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	cout << "ScavTrap copy constructor" << endl;
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
}

ScavTrap::~ScavTrap()
{
	cout << "ScavTrap destructor" << endl;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &other)
{
	cout << "ScavTrap assignation operator" << endl;
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	return (*this);
}

void	ScavTrap::guardGate()
{
	cout << "ScavTrap " << _name << " has entered in Gate keeper mode" << endl;
}
