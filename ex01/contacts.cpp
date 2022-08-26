#include "Contacts.hpp"

//trying to initialise _firstName(0) here initialisation list segfaults, why?
Contact::Contact(void):_firstName(""), _lastName(""), _nickName(""), _phoneNumber(""), _darkestSecret("") {
	// std::cout << "Contact constructor called:" << std::endl;
	return ;
}

Contact::~Contact(void){
	// std::cout << "Contact Destructor called" <<std::endl;
	return ;
}

void	Contact::setFirstName(std::string string){
	this->_firstName = string;
	return ;
}

void	Contact::setLastName(std::string string){
	this->_lastName = string;
	return ;
}

void	Contact::setNickName(std::string string){
	this->_nickName = string;
	return ;
}

void	Contact::setPhoneNumber(std::string string){
	this->_phoneNumber = string;
	return ;
}

void	Contact::setDarkestSecret(std::string string){
	this->_darkestSecret = string;
	return ;
}

std::string	Contact::getFirstName()const{
	return (this->_firstName);
}

std::string	Contact::getLastName()const{
	return (this->_lastName);
}

std::string	Contact::getNickName()const{
	return (this->_nickName);
}

std::string	Contact::getPhoneNumber()const{
	return (this->_phoneNumber);
}

std::string	Contact::getDarkestSecret()const{
	return (this->_darkestSecret);
}
