/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myapb.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 14:25:06 by eramirez          #+#    #+#             */
/*   Updated: 2018/01/09 21:44:49 by eramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "relevant.hpp"
#include <string>

void ft_addc(Book *contacts, int i)
{
	Book contact;
	std::cout << "First name?" << std::endl;
	std::getline (std::cin, contact.fname);

	std::cout << "Last name" << std::endl;
	std::getline (std::cin, contact.lname);

	std::cout << "Nickname?" << std::endl;
	std::getline (std::cin, contact.nname);

	std::cout << "Login?" << std::endl;
	std::getline (std::cin, contact.login);

	std::cout << "Current adress?" << std::endl;
	std::getline (std::cin, contact.padrs);

	std::cout << "Email adress?" << std::endl;
	std::getline (std::cin, contact.eadrs);

	std::cout << "Phone number?" << std::endl;
	std::getline (std::cin, contact.phnbr);

	std::cout << "Birthday?" << std::endl;
	std::getline (std::cin, contact.dborn);

	std::cout << "Favorite meal?" << std::endl;
	std::getline (std::cin, contact.ffood);

	std::cout << "Underwear color?" << std::endl;
	std::getline (std::cin, contact.ucolr);

	std::cout << "Darkest secret?" << std::endl;
	std::getline (std::cin, contact.dscrt);
	contact.flag = 1;
	contacts[i] = contact;
}

void print_contact(Book contacts, int j)
{
	std::string fname, lname, nname;

	if (contacts.fname.length() > 9)
	{
		fname = contacts.fname.substr(0,10);
		fname[9] = '.';
	}
	else
		fname = contacts.fname;
	
	if (contacts.lname.length() > 9)
	{
		lname = contacts.lname.substr(0,10);
		lname[9] = '.';
	}
	else
		lname = contacts.lname;

	if (contacts.nname.length() > 9)
	{
		nname = contacts.nname.substr(0,10);
		nname[9] = '.';
	}
	else
		nname = contacts.nname;

	std::cout	<< std::setw(10) << j << "|" 
				<< std::setw(10) << fname << "|"
				<< std::setw(10) << lname << "|"
				<< std::setw(10) << nname << std::endl;
}

void display_info(Book contact)
{
	if (contact.flag == 1)
	{
		std::cout << std::setw(13) << "First Name: "	<< contact.fname << std::endl;
		std::cout << std::setw(13) << "Last Name: "		<< contact.lname << std::endl;
		std::cout << std::setw(13) << "Nick Name: "		<< contact.nname << std::endl;
		std::cout << std::setw(13) << "Login: "			<< contact.login << std::endl;
		std::cout << std::setw(13) << "Curr. Adr: "		<< contact.padrs << std::endl;
		std::cout << std::setw(13) << "Email: "			<< contact.eadrs << std::endl;
		std::cout << std::setw(13) << "Phone Nbr: "		<< contact.phnbr << std::endl;
		std::cout << std::setw(13) << "Birthday: "		<< contact.dborn << std::endl;
		std::cout << std::setw(13) << "Fav. Food: "		<< contact.ffood << std::endl;
		std::cout << std::setw(13) << "Und. Color: "	<< contact.ucolr << std::endl;
		std::cout << std::setw(13) << "Drk. Secret: "	<< contact.dscrt << std::endl;
	}
}

void p_search(Book *contacts, int j)
{
	int i;
	int x;
	x = -1;
	std::string index;
	std::cout << "Which contact would you like to see?: ";
	std::getline (std::cin,  index);
	while(index[++x])
	{
		if (isdigit(index[x]) > 0)
			std::stringstream(index) >> i;
		else
		{
		std::cout << "Invalid number!" << std::endl;
		return;
		}
	}
	if (i >= 0 && i <= j && i < 8)
		display_info(contacts[i]);
	else if (i > j && i < 8)
		std::cout << "No contact at this index yet!" << std::endl;
	else
		std::cout << "Index out of range!" << std::endl;
}

int main(void)
{
	Book contacts[8];
	std::string cmd;
	int i;
	int j;

	i = -1;
	j = -1;
	while(1 + 1 == 2)
	{
		std::cout << "Whatchu wanna do? (SEARCH, ADD OR EXIT):  ";
		std::getline (std::cin, cmd);
		if(cmd.compare("SEARCH") == 0)
		{
			if (i > -1)
			{
				std::cout << "\n   Index   " << " First N. " << "   Last N. " << "  Nick N. " << std::endl;
				while(contacts[++j].flag == 1)
					print_contact(contacts[j], j);
				j = -1;
				std::cout << std::endl;
				p_search(contacts, i);
			}
			else
				std::cout << "No contacts in phonebook! (Try ADD first)" << std::endl;
		}
		else if(cmd.compare("ADD") == 0)
		{
			std::cout << "Adding" << std::endl;
			if (++i < 8)
				ft_addc(contacts, i);
			else
				std::cout << "Contacts full!" << std::endl;
		}
		else if(cmd.compare("EXIT") == 0)
			return(0);
		else
			std::cout << "Im sorry Dave, I cant let you do that..."<< std::endl;
	}
}
