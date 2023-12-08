/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmitache <rmitache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:27:31 by rmitache          #+#    #+#             */
/*   Updated: 2023/12/08 17:34:18 by rmitache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class	Contact
{
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
	public:
		Contact();
		~Contact();
		std::string	getFirstName(void);
		std::string	getFullFirstName(void);
		std::string	getLastName(void);
		std::string	getFullLastName(void);
		std::string	getNickname(void);
		std::string	getFullNickname(void);
		std::string	getPhoneNumber(void);
		std::string	getFullPhoneNumber(void);
		std::string	getDarkestSecret(void);
		std::string	getFullDarkestSecret(void);
		std::string		trunc(std::string input);
		void		setFirstName(std::string input);
		void		setLastName(std::string input);
		void		setNickName(std::string input);
		void		setPhoneNumber(std::string input);
		void		setDarkestSecret(std::string input);
};

#endif