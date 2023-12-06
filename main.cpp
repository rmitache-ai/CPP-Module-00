/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmitache <rmitache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:05:52 by rmitache          #+#    #+#             */
/*   Updated: 2023/12/06 21:13:10 by rmitache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(int argc, char **argv)
{
	PhoneBook	book;
	string		input;

	(void)argc;
	(void)argv;
	while (input != "EXIT")
	{
		std::cout << "Please enter an Command: ADD / SEARCH / EXIT" << std::endl;
		std::cout << "> ";
		getline(cin, input);

		if (input == "ADD")
			book.add();
		if (input == "SEARCH")
			book.search();
		if (input == "EXIT")
			break ;
	}
	return (0);
}