#include "PhoneBook.hpp"
//why order matters? Error: field '_ex' initialized after field '_count': _idx(-1), _ex(0), _count(0)
PhoneBook::PhoneBook(void) :  _idx(-1), _count(0), _ex(0), _width(10){
	// std::cout << "PhoneBook constructor called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void){
	// std::cout << "Custom Destructor called" << std::endl;
	return ;
}

void	PhoneBook::add(){
	std::string line;
	this->_idxCount();
	line = this->_addPrompt("First Name");
	this->_con[this->_idx].setFirstName(line);
	line = this->_addPrompt("Last Name:");
	this->_con[this->_idx].setLastName(line);
	line = this->_addPrompt("Nick Name:");
	this->_con[this->_idx].setNickName(line);
	line = this->_addPrompt("Phone Number:");
	this->_con[this->_idx].setPhoneNumber(line);
	line = this->_addPrompt("Darkest Secret:");
	this->_con[this->_idx].setDarkestSecret(line);
}

void	PhoneBook::_idxCount(void){
	if (this->_count != 8)
		this->_count ++;
	if (this->_idx == 7)
		this->_idx = 0;
	else
		this->_idx += 1;
}

std::string	PhoneBook::_addPrompt(std::string message){
	while (1)
	{
		std::string line;
		std::cout << "Enter the contact's " << message <<":";
		getline(std::cin, line);
		if (line.size() != 0)
		{
			return (line);
		}
		else
		std::cout  << message << "Field can not be empty!"<< std::endl;
	}
}

void	PhoneBook::search(){
	PhoneBook::_std_prompt();
	PhoneBook::_promptWhich();
	return ;
}

void	PhoneBook::_std_prompt(){
	std::cout << std::setw(this->_width + 1) << std::right << "Index|"
	<< std::setw(this->_width + 1) << std::right << "_firstName|"
	<< std::setw(this->_width + 1) << std::right << "_lastName|"
	<< std::setw(this->_width + 1) << std::right << "nickname" << std::endl << std::endl;
	for (size_t i = 0; i < this->_count; i++)
	{
		std::cout << std::setw(this->_width) << std::right << i + 1
		<< "|" << std::setw(this->_width) << std::right << this->_truncate(this->_con[i].getFirstName())
		<< "|" << std::setw(this->_width) << std::right << this->_truncate(this->_con[i].getLastName())
		<< "|" << std::setw(this->_width) << std::right << this->_truncate(this->_con[i].getNickName()) << std::endl;
	}
	return ;
}

//stoi not allowed, its only since c++ 11
void	PhoneBook::_promptWhich(){
	std::string index;
	std::cout << "Enter an index to display:";
	getline(std::cin, index);
	size_t int_index;
	int_index = atoi(index.c_str());
	if (int_index < 1 || int_index > 8 || int_index > this->_count)
		std::cout << "Invalid Index" << std::endl;
	else
		PhoneBook::_show_contact(int_index);
}

void	PhoneBook::_show_contact(int index){
	std::cout	<< "First Name:" << this->_con[index - 1].getFirstName() << std::endl
				<< "Last Name:" << this->_con[index - 1].getLastName() << std::endl
				<< "Nick Name:" << this->_con[index - 1].getNickName() << std::endl
				<< "Phone Number:" << this->_con[index - 1].getPhoneNumber() << std::endl
				<< "Darkest Secret:" << this->_con[index - 1].getDarkestSecret() << std::endl;
}

std::string	PhoneBook::_truncate(std::string input){
	if (input.size() > this->_width)
	{
		return (input.substr(0, this->_width - 1) + '.');
	}
	return (input);
}



int		PhoneBook::get_exit()
{
	return (this->_ex);
}

void	PhoneBook::exit(){
	this->_ex = 1;
	return ;
}

void	PhoneBook::add_contact(std::string first_name, 
							 std::string last_name,
							 std::string nick_name,
							 std::string phone_number,
							 std::string darkest_secret){
	this->_idxCount();
	this->_con[this->_idx].setFirstName(first_name);
	this->_con[this->_idx].setLastName(last_name);
	this->_con[this->_idx].setNickName(nick_name);
	this->_con[this->_idx].setPhoneNumber(phone_number);
	this->_con[this->_idx].setDarkestSecret(darkest_secret);
}
