/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 13:14:28 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/11/29 15:41:07 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

using std::cout;
using std::endl;
using std::string;

DiamondTrap::DiamondTrap() : ClapTrap("DiamondClapTrap")
{
	cout << "DiamondTrap default constructor" << endl;
	_name = "diamond trappa";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 30;
	cout << "claptrap name: " << ClapTrap::_name << endl;
}

DiamondTrap::DiamondTrap(const string name)
{
	cout << "DiamondTrap constructor with name" << endl;
	_name = name;
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) :
	ClapTrap(other),
	ScavTrap(other),
	FragTrap(other)
{
	cout << "DiamondTrap copy constructor" << endl;
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
}

DiamondTrap::~DiamondTrap()
{
	cout << "DiamondTrap destructor called" << endl;
}

DiamondTrap &DiamondTrap::operator = (const DiamondTrap &other)
{
	cout << "DiamondTrap assignation operator" << endl;
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	cout << "I am " << _name << " and my ClapTrap name is " << ClapTrap::_name << endl;
}
