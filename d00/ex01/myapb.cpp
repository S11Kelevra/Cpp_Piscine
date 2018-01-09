/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myapb.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 14:25:06 by eramirez          #+#    #+#             */
/*   Updated: 2018/01/08 18:13:20 by eramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <iomanip>
#include <string>
class Book
{
	public:
		std::string fname, lname, nname, login, padrs, eadrs, phnbr, dborn, ffood, ucolr, dscrt;
		int flag;
};


void ft_addc(Book *contacts, int i)
{
	std::cout << "First name?" << std::endl;
	std::getline (std::cin, contacts[i].fname);

	std::cout << "Last name" << std::endl;
	std::getline (std::cin, contacts[i].lname);

	std::cout << "Nickname?" << std::endl;
	std::getline (std::cin, contacts[i].nname);

	std::cout << "Login?" << std::endl;
	std::getline (std::cin, contacts[i].login);

	std::cout << "Current adress?" << std::endl;
	std::getline (std::cin, contacts[i].padrs);

	std::cout << "Email adress?" << std::endl;
	std::getline (std::cin, contacts[i].eadrs);

	std::cout << "Phone number?" << std::endl;
	std::getline (std::cin, contacts[i].phnbr);

	std::cout << "Birthday?" << std::endl;
	std::getline (std::cin, contacts[i].dborn);

	std::cout << "Favorite meal?" << std::endl;
	std::getline (std::cin, contacts[i].ffood);

	std::cout << "Underwear color?" << std::endl;
	std::getline (std::cin, contacts[i].ucolr);

	std::cout << "Darkest secret?" << std::endl;
	std::getline (std::cin, contacts[i].dscrt);
	contacts[i].flag = 1;
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
		std::cout << contact.fname << std::endl;
		std::cout << contact.lname << std::endl;
		std::cout << contact.nname << std::endl;
		std::cout << contact.login << std::endl;
		std::cout << contact.padrs << std::endl;
		std::cout << contact.eadrs << std::endl;
		std::cout << contact.phnbr << std::endl;
		std::cout << contact.dborn << std::endl;
		std::cout << contact.ffood << std::endl;
		std::cout << contact.ucolr << std::endl;
		std::cout << contact.dscrt << std::endl;
	}
	else
		std::cout << "No contact at this index :(" << std::endl;
}

void p_search(Book *contacts)
{
	int i;
	std::cout << "Which contact would you like to see?: ";
	std::getline(std::cin, i);
	display_info(contacts[i]);
}

int main(void)
{
	Book contacts[8];
	std::string cmd;
	int i;
	int j;

	i = 0;
	j = -1;
	while(1 + 1 == 2)
	{
		std::cout << "Whatchu wanna do? (SEARCH, ADD OR EXIT)" << std::endl;
		std::getline (std::cin, cmd);
		if(cmd.compare("SEARCH") == 0)
		{
			std::cout <<"Searching" << std::endl;
			while(contacts[++j].flag == 1)
				print_contact(contacts[j], j);
			j = -1;
			p_search(contacts);
		}
		else if(cmd.compare("ADD") == 0)
		{
			std::cout << "Adding" << std::endl;
			if (i < 8)
			{
				ft_addc(contacts, i);
				i++;
			}
			else
			{
				std::cout << "Contacts full!" << std::endl;
				system("say 'CONTACTS ARE FULL!'");
			}
		}
		else if(cmd.compare("EXIT") == 0)
			return(0);
		else
		{
			std::cout << "Im sorry Dave, I cant let you do that..."<< std::endl;
			system("say 'try again butter fingers'"); 
		}
	}
}
