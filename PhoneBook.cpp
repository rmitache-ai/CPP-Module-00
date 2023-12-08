/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmitache <rmitache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:32:27 by rmitache          #+#    #+#             */
/*   Updated: 2023/12/08 18:20:30 by rmitache         ###   ########.fr       */
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
		std::cout << "This is your 8th Contact. If you continue, your last will be overwritten!" << std::endl; std::cout << "> ";
	while (!std::cin.eof() && input == "")
	{
		std::cout << "Please Enter the First Name: " << std::endl; std::cout << "> ";
		if (getline(std::cin, input) && input != "")
			this->_contacts[this->_index % 8].setFirstName(input);
	}
	input = "";
	while (!std::cin.eof() && input == "")
	{
		std::cout << "Please Enter the Last Name: " << std::endl; std::cout << "> ";
		if (getline(std::cin, input) && input != "")
			this->_contacts[this->_index % 8].setLastName(input);
	}
	input = "";
	while (!std::cin.eof() && input == "")
	{
		std::cout << "Please Enter the Nickname: " << std::endl; std::cout << "> ";
		if (getline(std::cin, input) && input != "")
			this->_contacts[this->_index % 8].setNickName(input);
	}
	input = "";
	while (!std::cin.eof() && input == "")
	{
		std::cout << "Please Enter the Phone Number: " << std::endl; std::cout << "> ";
		if (getline(std::cin, input) && input != "")
			this->_contacts[this->_index % 8].setPhoneNumber(input);
	}
	input = "";
	while (!std::cin.eof() && input == "")
	{
		std::cout << "Please Enter the Darkest Secret: " << std::endl; std::cout << "> ";
		if (getline(std::cin, input) && input != "")
			this->_contacts[this->_index % 8].setDarkestSecret(input);
	}
	this->_index++;
}

void	PhoneBook::search(void)
{
	std::string	input;

	input = "";
	std::cout << std::endl;
		std::cout	<< std::right << std::setw(10) << "Index" << " | "
					<< std::right << std::setw(10) << "First Name" << " | "
					<< std::right << std::setw(10) << "Last Name" << " | "
					<< std::right << std::setw(10) << "Nickname" << " | " << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout	<< std::right << std::setw(10) << i << " | "
					<< std::right << std::setw(10) << this->_contacts[i].getFirstName() << " | "
					<< std::right << std::setw(10) << this->_contacts[i].getLastName() << " | "
					<< std::right << std::setw(10) << this->_contacts[i].getNickname() << " | " << std::endl;
	}
	input = "";
	if (!std::cin.eof() && input == "")
	{
		std::cout << "Please Enter an index so get a detailed view" << std::endl;
		if (getline(std::cin, input) && input != "")
		{
			try
			{
				int index = std::stoi(input);
				if (index >= 0 && index < this->_index)
				{
					std::cout << std::endl;
					std::cout << "Contact: "		<< index << std::endl;
					std::cout << "First Name: "		<< this->_contacts[index].getFullFirstName() << std::endl;
					std::cout << "Last Name: "		<< this->_contacts[index].getFullLastName() << std::endl;
					std::cout << "Nickame: "		<< this->_contacts[index].getFullNickname() << std::endl;
					std::cout << "Phone Number: "	<< this->_contacts[index].getFullPhoneNumber() << std::endl;
					std::cout << "Darkest Secret: "	<< this->_contacts[index].getFullDarkestSecret() << std::endl;
					std::cout << std::endl;
				}
				else
					std::cout << "Index is out of range!" << std::endl;
			}
			catch (std::invalid_argument &ii){
				std::cerr << "Invalid input. Please enter a valid index (a non-negative integer)." << std::endl;
			}
			catch (std::out_of_range &oor){
				std::cerr << "Input out of range. Please enter a valid index (a non-negative integer)." << std::endl;
			}
		}
	}
}
