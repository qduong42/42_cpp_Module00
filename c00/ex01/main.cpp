/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduong <qduong@students.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 16:14:00 by qduong            #+#    #+#             */
/*   Updated: 2022/08/14 13:39:00 by qduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static void	kawaii(){
	std::cout << "::: (\\_(\\" << std::endl;
	std::cout << "*:  (=' :') " << std::endl;
	std::cout << "•.. (,('')('') " << std::endl;
}

static void	handler(std::string input, PhoneBook *bk){
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

// static void	populate(PhoneBook *book)
// {
// 	book->add_contact("Huy", "Duong", "Beamer Steamer", "555-HIRE_ME", "I like to breath");
// 	book->add_contact("Daniel James", "Crochet", "Dani", "0695 224 322", "half french");
// 	book->add_contact("Rus", "Alman", "Ramo", "555-Hailboom", "Citizen of the world");
// 	book->add_contact("Linus", "Torvalds", "Linny", "555-666-777", "L33t Coder");
// 	book->add_contact("Amy", "Sherbeck", "Ames", "555-111-435", "Warm at the core");
// 	book->add_contact("Daniel", "Hartland", "Dan", "477-Berlin", "Likes to climb");
// 	book->add_contact("Tom", "Albright", "Tommy", "122-Tokyo", "Cooks everyday");
// 	book->add_contact("Jim", "Harly", "The Termin maker", "555-Osaka", "Vigilante at Night");
// }

int main (void){
	PhoneBook	bk;
	std::string	input = "";

	kawaii();
	// populate(&bk);
	while (!bk.get_exit())
	{
		std::cout << "Enter one of the following commands: ADD, SEARCH, EXIT" << std::endl;
		std::getline(std::cin, input);
		handler(input, &bk);
	}
	return (0);
}
