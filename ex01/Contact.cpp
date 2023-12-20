#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact::Contact(void) {}

Contact::~Contact(void) {}

void Contact::setFirstName(std::string input) { this->_firstName = input; }

void Contact::setLastName(std::string input) { this->_lastName = input; }

void Contact::setNickName(std::string input) { this->_nickName = input; }

void Contact::setPhoneNumber(std::string input) { this->_phoneNumber = input; }

void Contact::setDarkestSecret(std::string input) { this->_darkestSecret = input; }

std::string Contact::getFirstName(void)
{
	if (_firstName.length() >= 10)
		return (_firstName.substr(0, 9) + ".");
	else
		return (_firstName);
}

std::string Contact::getLastName(void)
{
	if (_lastName.length() >= 10)
		return (_lastName.substr(0, 9) + ".");
	else
		return (_lastName);
}

std::string Contact::getNickname(void)
{
	if (_nickName.length() >= 10)
		return (_nickName.substr(0, 9) + ".");
	else
		return (_nickName);
}

std::string Contact::getPhoneNumber(void)
{
	if (_phoneNumber.length() >= 10)
		return (_phoneNumber.substr(0, 9) + ".");
	else
		return (_phoneNumber);
}

std::string Contact::getDarkestSecret(void)
{
	if (_darkestSecret.length() >= 10)
		return (_darkestSecret.substr(0, 9) + ".");
	else
		return (_darkestSecret);
}


std::string Contact::getDetailedFirstName(void) { return (this->_firstName); }
std::string Contact::getDetailedLastName(void) { return (this->_lastName); }
std::string Contact::getDetailedNickname(void) { return (this->_nickName); }
std::string Contact::getDetailedPhoneNumber(void) { return (this->_phoneNumber); }
std::string Contact::getDetailedDarkestSecret(void) { return (this->_darkestSecret); }