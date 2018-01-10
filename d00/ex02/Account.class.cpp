/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 12:50:17 by eramirez          #+#    #+#             */
/*   Updated: 2018/01/09 17:40:58 by eramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include "Account.class.hpp"
#include <ctime>
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
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
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
	Account::_displayTimestamp();
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
	std::cout	<< "index:"			<< this->_accountIndex
				<< ";p_amount:"		<< this->_amount;
	this->_amount += deposit;
	std::cout	<< ";deposit:"		<< deposit
				<< ";amount:"		<< this->_amount
				<< ";nb_deposits;"	<< this->_nbDeposits << std::endl;
}

bool    Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	if (this->_amount - withdrawal > 0)
	{
		this->_nbWithdrawals++;
		std::cout	<< "index:"				<< this->_accountIndex
					<< ";p_amount:"			<< this->_amount;
		std::cout	<< ";witdrawal:"		<< withdrawal; 
		this->_amount -= withdrawal;
		std::cout	<< ";amount:"			<< this->_amount
					<< ";nb_withdrawals;"	<< this->_nbWithdrawals << std::endl;
		Account::_totalNbWithdrawals++;
		Account::_totalAmount -= withdrawal; 
		return(1);
	}
	else
	{
		std::cout	<< "index:"				<< this->_accountIndex
					<< ";p_amount:"			<< this->_amount
					<< ";witdrawal:refused"	<< std::endl; 
		return(0);
	}
}

int     Account::checkAmount(void) const
{
		return(this->_amount);
}

void    Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout	<< "index:"			<< this->_accountIndex
				<< ";amount:"		<< this->_amount
				<< ";deposits:"		<< this->_nbDeposits
				<< ";withdrawals:"	<< this->_nbWithdrawals << std::endl;
}
void Account::_displayTimestamp( void )
{
	system("date +'[%Y%m%d_%H%M%S] ' | tr -d '\n'");
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
