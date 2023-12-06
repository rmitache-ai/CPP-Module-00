/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmitache <rmitache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:32:27 by rmitache          #+#    #+#             */
/*   Updated: 2023/12/06 22:23:00 by rmitache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void)
{
}

PhoneBook::~PhoneBook(void)
{
	
}

void PhoneBook::add(void)
{
	std::string input;

	input = "";
	if (this->_index > 7)
	{
		std::cout << "This is your 8th Contact. If you continue, your last will be overwritten!" << std::endl; std::cout << "> ";
		this->_index = 0;
	}
	while (!std::cin.eof() && input == "")
	{
		std::cout << "Please Enter the First Name: " << std::endl; std::cout << "> ";
		if (getline(std::cin, input) && input != "")
			this->_contacts[this->_index].setFirstName(input);
	}
	input = "";
	while (!std::cin.eof() && input == "")
	{
		std::cout << "Please Enter the Last Name: " << std::endl; std::cout << "> ";
		if (getline(std::cin, input) && input != "")
			this->_contacts[this->_index].setLastName(input);
	}
	input = "";
	while (!std::cin.eof() && input == "")
	{
		std::cout << "Please Enter the Nickname: " << std::endl; std::cout << "> ";
		if (getline(std::cin, input) && input != "")
			this->_contacts[this->_index].setNickName(input);
	}
	input = "";
	while (!std::cin.eof() && input == "")
	{
		std::cout << "Please Enter the Phone Number: " << std::endl; std::cout << "> ";
		if (getline(std::cin, input) && input != "")
			this->_contacts[this->_index].setPhoneNumber(input);
	}
	input = "";
	while (!std::cin.eof() && input == "")
	{
		std::cout << "Please Enter the Darkest Secret: " << std::endl; std::cout << "> ";
		if (getline(std::cin, input) && input != "")
			this->_contacts[this->_index].setDarkestSecret(input);
	}

	this->_index++;
}

void	PhoneBook::search(void)
{
	std::string	input;

	input = "";
	std::cout << std::endl;
		std::cout	<< std::setw(10) << "Index" << "|"
					<< std::setw(10) << "First Name" << "|"
					<< std::setw(10) << "Last Name" << "|"
					<< std::setw(10) << "Nickname" << std::endl;
	for (int i = 0; i < this->_index; i++) // index should reset?
	{
		std::cout	<< std::setw(10) << i
					<< std::setw(10) << this->_contacts[i].getFirstName()
					<< std::setw(10) << this->_contacts[i].getLastName()
					<< std::setw(10) << this->_contacts->getNickname() << std::endl;
	}
	input = "";
	if (!std::cin.eof() && input == "")
	{
		std::cout << "Please Enter an index so get a detailed view" << std::endl;
		if (getline(std::cin, input) && input != "")
		{
			int	index = std::stoi(input);
			if (index > this->_index)
				std::cout << "Index is out of range!" << std::endl;
			else
				{
					std::cout << this->_contacts[index].getFirstName() << std::endl;
					std::cout << this->_contacts[index].getLastName() << std::endl;
					std::cout << this->_contacts[index].getNickname() << std::endl;
					std::cout << this->_contacts[index].getPhoneNumber() << std::endl;
					std::cout << this->_contacts[index].getDarkestSecret() << std::endl;
				}
		}
	}
}
