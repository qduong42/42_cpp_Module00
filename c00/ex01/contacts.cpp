#include "contacts.hpp"

//trying to initialise _first_name(0) here initialisation list segfaults, why?
Contact::Contact(void):_first_name(""), _last_name(""), _nick_name(""), _phone_number(""), _darkest_secret("") {
	std::cout << "Contact constructor called:" << std::endl;
	return ;
}

void	Contact::set_first_name(std::string string){
	this->_first_name = string;
	return ;
}

void	Contact::set_last_name(std::string string){
	this->_last_name = string;
	return ;
}

void	Contact::set_nick_name(std::string string){
	this->_nick_name = string;
	return ;
}

void	Contact::set_phone_number(std::string string){
	this->_phone_number = string;
	return ;
}

void	Contact::set_darkest_secret(std::string string){
	this->_darkest_secret = string;
	return ;
}

std::string	Contact::get_first_name(){
	return (this->_first_name);
}

std::string	Contact::get_last_name(){
	return (this->_last_name);
}

std::string	Contact::get_nick_name(){
	return (this->_nick_name);
}

std::string	Contact::get_phone_number(){
	return (this->_phone_number);
}

std::string	Contact::get_darkest_secret(){
	return (this->_darkest_secret);
}

Contact::~Contact(void){
	std::cout << "Contact Destructor called" <<std::endl;
	return ;
}
