/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmitache <rmitache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 18:27:14 by rmitache          #+#    #+#             */
/*   Updated: 2023/12/08 19:36:02 by rmitache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <time.h>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts()
{
	return (_nbAccounts);
}

int	Account::getTotalAmount()
{
	return (_totalAmount);
}

int	Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos()
{
	t::_displayTimestamp();
	std::cout << "Number of Accounts: " << getNbAccounts() << std::endl;
	std::cout << "Total Amount: " << getTotalAmount() << std::endl;
	std::cout << "Number of Deposits: " << getNbDeposits() << std::endl;
	std::cout << "Number of Withdrawls: " << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	t::_displayTimestamp();
	std::cout << "Account Index: " << _accountIndex << std::endl;
}

void	Account::_displayTimestamp()
{
	time_t	currentTime = time(NULL);
	std::cout << "Current Time: " << ctime(&currentTime);
}