/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduong <qduong@students.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 16:14:00 by qduong            #+#    #+#             */
/*   Updated: 2022/08/14 11:50:45 by qduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

void	kawaii(){
	std::cout << "::: (\\_(\\" << std::endl;
	std::cout << "*:  (=' :') " << std::endl;
	std::cout << "•.. (,('')('') " << std::endl;
}

void	handler(std::string input, PhoneBook *bk){
	if (input == "ADD")
		bk->add();
	else if (input == "SEARCH")
		bk->search();
	else if (input == "EXIT")
		bk->exit();
	else
	{
		std::cout << "Enter a valid command! cASe_SeNsiTiVe :D" << std::endl;
		return ;
	}
}

int main (void){
	PhoneBook	bk;
	std::string	input = "";

	kawaii();
	while (!bk.get_exit())
	{
		std::cout << "Enter one of the following commands: ADD, SEARCH, EXIT" << std::endl;
		std::getline(std::cin, input);
		handler(input, &bk);
	}
	return (0);
}
