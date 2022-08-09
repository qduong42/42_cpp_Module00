#include "phonebook.hpp"

Phonebook::Phonebook() :  idx(0), ex(0){
	std::cout << "custom constructor called" << std::endl;
	std::cout << "this->ex:" << this->ex << std::endl;
}

Phonebook::~Phonebook(){

} 

void	Phonebook::add(Phonebook *bk){
	if (idx > 7)
		idx = 0;
	std::cout << "Enter the contact's First Name:" << std::endl;
	std::cin >> bk->con[idx].first_name;
	std::cout << "Enter the contact's Last Name:" << std::endl;
	std::cin >> bk->con[idx].last_name;
	std::cout << "Enter the contact's Nick Name:" << std::endl;
	std::cin >> bk->con[idx].nickname;
	std::cout << "Enter the contact's Phone Number:" << std::endl;
	std::cin >> bk->con[idx].phone_number;
	std::cout << "Enter the contact's Darkest Secret:" << std::endl;
	std::cin >> bk->con[idx].darkest_secret;
	idx++;
}

void	Phonebook::search(Phonebook *bk){
	(void) bk;
	// std::cout << bk->idx << std::setw(10) << "|" std::endl;
	return ;
}

void	Phonebook::exit(Phonebook *bk){
	bk->ex = 1;
	return ;
}