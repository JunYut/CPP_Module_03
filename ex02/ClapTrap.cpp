/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 09:27:33 by tjun-yu           #+#    #+#             */
/*   Updated: 2024/11/29 12:51:57 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

using std::cout;
using std::endl;
using std::string;

ClapTrap::ClapTrap()
{
	cout << "ClapTrap default constructor called" << endl;
	
	_name = "clappa trappa";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name) 
{
	cout << "ClapTrap string constructor called" << endl;
	
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	cout << "ClapTrap copy constructor called" << endl;
	
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
}

ClapTrap::~ClapTrap() 
{
	cout << "ClapTrap destructor called" << endl;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &other)
{
	if (this == &other) return (*this);
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	return (*this);
}

void	ClapTrap::attack(std::string const & target)
{
	if (_hitPoints == 0 || _energyPoints == 0) return ;
	cout << "ClapTrap " << _name << " attacks " << target << ", causing " 
		 << _attackDamage << " points of damage!" << endl;
	_energyPoints -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints == 0 || _energyPoints == 0) return ;
	cout << "ClapTrap " << _name << " has taken " << amount
		 << " points of damage!" << endl;
	if (_hitPoints < amount) 
		_hitPoints = 0;
	else
		_hitPoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints == 0 || _energyPoints == 0) return ;
	cout << "ClapTrap " << _name << " has been repaired for " << amount
		 << " points!" << endl;
	_energyPoints -= 1;
}
