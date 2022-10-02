/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estrong <estrong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 16:50:41 by estrong           #+#    #+#             */
/*   Updated: 2022/10/02 16:50:42 by estrong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class	Contact	{
private:
		size_t 				_Index;
		static std::string	_DataNames[5];
		std::string			_DataSet[5];

		bool	isNumber(const std::string& str) const;

public:
				Contact(void);
		virtual	~Contact(void);

		void	getData(void) const;
		bool	setData(size_t index);
		void	BriefInfo(void)	const;

};

#endif