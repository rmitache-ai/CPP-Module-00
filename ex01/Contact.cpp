#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

void Contact::setFirstName(std::string input)
{
	this->_firstName = input;
}

void Contact::setLastName(std::string input)
{
	this->_lastName = input;
}

void Contact::setNickName(std::string input)
{
	this->_nickName = input;
}

void Contact::setPhoneNumber(std::string input)
{
	this->_phoneNumber = input;
}

void Contact::setDarkestSecret(std::string input)
{
	this->_darkestSecret = input;
}

std::string Contact::getFirstName(void)
{
	return (this->_firstName);
}

std::string Contact::getLastName(void)
{
	return (this->_lastName);
}

std::string Contact::getNickname(void)
{
	return (this->_nickName);
}

std::string Contact::getPhoneNumber(void)
{
	return (this->_phoneNumber);
}

std::string Contact::getDarkestSecret(void)
{
	return (this->_darkestSecret);
}