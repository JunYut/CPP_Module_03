/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:58:06 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/11/29 14:35:34 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

using std::cout;
using std::endl;
using std::string;

FragTrap::FragTrap() : ClapTrap("fragga trappa")
{
	cout << "FragTrap default constructor" << endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(string name)
{
	cout << "FragTrap string constructor" << endl;
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	cout << "FragTrap copy constructor" << endl;
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
}

FragTrap::~FragTrap()
{
	cout << "FragTrap destructor" << endl;
}

FragTrap& FragTrap::operator = (const FragTrap& other)
{
	cout << "FragTrap assignation operator" << endl;
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	cout << "FragTrap " << _name << " high fives guys !!!" << endl;
}
