/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmitache <rmitache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:05:52 by rmitache          #+#    #+#             */
/*   Updated: 2023/12/08 17:49:46 by rmitache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(int argc, char **argv)
{
	PhoneBook		book;
	std::string		input;

	(void)argc;
	(void)argv;
	std::cout << "---------- Welcome TO MY PHONEBOOK ----------" << std::endl << std::endl;
	std::cout << "Please enter one of the following commands: "<< std::endl << std::endl;
	std::cout << "ADD: To add a new contact." << std::endl;
	std::cout << "SEARCH: To search for a contact." << std::endl;
	std::cout << "EXIT: To close the program." << std::endl;
	while (input != "EXIT")
	{
		std::cout << "> ";
		getline(std::cin, input);
		if (input == "ADD")
			book.add();
		if (input == "SEARCH")
			book.search();
		if (input == "EXIT")
			break ;
	}
	return (0);
}