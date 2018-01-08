# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eramirez <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/08 14:15:27 by eramirez          #+#    #+#              #
#    Updated: 2018/01/08 14:20:58 by eramirez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
	clang++ -Wall -Werror -Wextra -o megaphone megaphone.cpp

clean:
	rm megaphone

test1:
	./megaphone "this should be uppercase"

test2:
	./megaphone

test3:
	./megaphone "one string " "two string " "red string " "blue string"
