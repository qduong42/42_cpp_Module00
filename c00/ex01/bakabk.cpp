/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bakabk.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduong <qduong@students.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 16:14:00 by qduong            #+#    #+#             */
/*   Updated: 2022/07/30 17:35:17 by qduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "bakabk.hpp"

void	kawaii()
{
	std::cout << "::: (\\_(\\" << std::endl;
	std::cout << "*:  (=' :') " << std::endl;
	std::cout << "•.. (,('')('') " << std::endl;
}

void	handler(sstr input, Phonebook *bk)
{
	if (input == "ADD")
	//
	else if (input == "SEARCH")
	//
	else if (input == "EXIT")
	//
}

int main (void)
{
	Phonebook	bk;
	sstr	input;

	while (1)
	{
		kawaii();
		std::cout << "Enter one of the following commands: ADD, SEARCH, EXIT" << std::endl;
		std::cin >> input;
		handler(input, &bk);
	}
	return (0);
}
