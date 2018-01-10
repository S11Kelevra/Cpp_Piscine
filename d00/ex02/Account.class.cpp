/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 12:50:17 by eramirez          #+#    #+#             */
/*   Updated: 2018/01/09 16:11:47 by eramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include "Account.class.hpp"

int Account::getNbAccounts(void)
{
	return(Account::_nbAccounts);
}

int  Account::getTotalAmount(void)
{
	return(Account::_totalAmount);
}

int  Account::getNbDeposits(void)
{
	return(Account::_totalNbDeposits);
}

int  Account::getNbWithdrawals(void)
{
	return(Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout	<< "accounts:"		<< Account::_nbAccounts 
				<< ";total:"		<< Account::_totalAmount 
				<< ";deposits:"		<< Account::_totalNbDeposits
				<< ";withdrawals:"	<< Account::_totalNbWithdrawals
				<<std::endl;
}

Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit;
	this->_accountIndex = Account::_nbAccounts;
	Account::_displayTimestamp();
	std::cout	<< "index:"		<< this->_accountIndex
				<< ";ammount:"	<< this->_amount
				<< ";created"	<< std::endl;
	Account::_nbAccounts++;
	Account::_totalAmount += this->_amount; 
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout	<< "index:"		<< this->_accountIndex
				<< ";ammount:"	<< this->_amount
				<< ";closed"	<< std::endl;
	Account::_nbAccounts--;
}

void    Account::makeDeposit(int deposit)
{
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	std::cout << "Depositing" << std::endl;
	this->_amount += deposit; 
	Account::_totalAmount += deposit; 
}

bool    Account::makeWithdrawal(int withdrawal)
{
	std::cout << "Withdrawing" << std::endl;
	if (this->_amount - withdrawal > 0)
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		Account::_totalAmount -= withdrawal; 
		return(1);
	}
	else
		return(0);
}

int     Account::checkAmount(void) const
{
		return(this->_amount);
}

void    Account::displayStatus(void) const
{
	std::cout << " Status Here " << std::endl;
}
void Account::_displayTimestamp( void )
{
	std::cout << "[Time Here] ";
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
