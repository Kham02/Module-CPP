/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estrong <estrong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 16:50:16 by estrong           #+#    #+#             */
/*   Updated: 2022/10/02 16:50:17 by estrong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i;
    int n;

    i = 1;
    n = 0;
    if (ac < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE * " << std::endl;
    else
	{
		for(int i = 1; av[i]; i++)
			for(int j = 0; av[i][j]; j++)
				std::cout << (char )toupper(av[i][j]);
		std::cout << std::endl;
	}
    return (0);
}