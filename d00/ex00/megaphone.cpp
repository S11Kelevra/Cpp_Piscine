/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 13:32:32 by eramirez          #+#    #+#             */
/*   Updated: 2018/01/08 14:24:51 by eramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <string>
int main (int argc, char **argv)
{
	int i;
	int j;
	i = -1;
	j = 1;
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (j < argc)
		{
			std::string str(argv[j]);
			while (str[++i])
				str[i] = toupper(str[i]);
			std::cout << str;
			j++;
			i = -1;
		}
	}
	std::cout << "\n"; 
	return(0);
}
