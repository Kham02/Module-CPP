/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estrong <estrong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 16:50:53 by estrong           #+#    #+#             */
/*   Updated: 2022/10/02 16:50:55 by estrong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class	PhoneBook	{
private:
		Contact	_contacts[8];
		size_t	_count;
		size_t	_contactIndex;

		void	Header(void)	const;

public:
				PhoneBook(void);
		virtual	~PhoneBook(void);

		bool	addContact(void);
		bool	searchContact(void)	const;

};

#endif