/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bakabk.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduong <qduong@students.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 16:14:00 by qduong            #+#    #+#             */
/*   Updated: 2022/08/01 17:34:03 by qduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "bakabk.hpp"

void	kawaii(){
	std::cout << "::: (\\_(\\" << std::endl;
	std::cout << "*:  (=' :') " << std::endl;
	std::cout << "•.. (,('')('') " << std::endl;
}

void	handler(std::string input, Phonebook *bk){
	if (input == "ADD")
		bk->add(bk);
	else if (input == "SEARCH")
		bk->search(bk);
	else if (input == "EXIT")
		bk->exit(bk);
	else
		return ;
}

int main (void){
	Phonebook	bk;
	std::string	input;

	kawaii();
	printf("%d\n", bk.ex);
	while (!bk.ex)
	{
		std::cout << "Enter one of the following commands: ADD, SEARCH, EXIT" << std::endl;
		std::cin >> input;
		handler(input, &bk);
	}
	return (0);
}
