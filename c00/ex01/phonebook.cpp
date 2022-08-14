#include "PhoneBook.hpp"
//why order matters? Error: field '_ex' initialized after field '_count': _idx(-1), _ex(0), _count(0)
PhoneBook::PhoneBook(void) :  _idx(-1), _count(0), _ex(0), _width(10){
	std::cout << "PhoneBook constructor called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void){
	std::cout << "Custom Destructor called" << std::endl;
	return ;
}

void	PhoneBook::add(){
	std::string line;
	this->_idx_count();
	line = this->_add_prompt("First Name");
	this->_con[this->_idx].set_first_name(line);
	line = this->_add_prompt("Last Name:");
	this->_con[this->_idx].set_last_name(line);
	line = this->_add_prompt("Nick Name:");
	this->_con[this->_idx].set_nick_name(line);
	line = this->_add_prompt("Phone Number:");
	this->_con[this->_idx].set_phone_number(line);
	line = this->_add_prompt("Darkest Secret:");
	this->_con[this->_idx].set_darkest_secret(line);
}

void	PhoneBook::_idx_count(void){
	if (this->_count != 8)
		this->_count ++;
	if (this->_idx == 7)
		this->_idx = 0;
	else
		this->_idx += 1;
}

std::string	PhoneBook::_add_prompt(std::string message){
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
	PhoneBook::_prompt_which();
	return ;
}

void	PhoneBook::_std_prompt(){
	std::cout << std::setw(this->_width + 1) << std::right << "Index|"
	<< std::setw(this->_width + 1) << std::right << "_first_name|"
	<< std::setw(this->_width + 1) << std::right << "_last_name|"
	<< std::setw(this->_width + 1) << std::right << "nickname" << std::endl << std::endl;
	for (size_t i = 0; i < this->_count; i++)
	{
		std::cout << std::setw(this->_width) << std::right << i + 1
		<< "|" << std::setw(this->_width) << std::right << this->_truncate(this->_con[i].get_first_name())
		<< "|" << std::setw(this->_width) << std::right << this->_truncate(this->_con[i].get_last_name())
		<< "|" << std::setw(this->_width) << std::right << this->_truncate(this->_con[i].get_nick_name()) << std::endl;
	}
	return ;
}

//stoi not allowed, its only since c++ 11
void	PhoneBook::_prompt_which(){
	std::string index;
	std::cout << "Enter an index to display:";
	getline(std::cin, index);
	int int_index;
	int_index = atoi(index.c_str());
	if (int_index < 1 || int_index > 8)
		std::cout << "Invalid Index" << std::endl;
	else
		PhoneBook::_show_contact(int_index);
}

void	PhoneBook::_show_contact(int index){
	std::cout	<< "First Name:" << this->_con[index - 1].get_first_name() << std::endl
				<< "Last Name:" << this->_con[index - 1].get_last_name() << std::endl
				<< "Nick Name:" << this->_con[index - 1].get_nick_name() << std::endl
				<< "Phone Number:" << this->_con[index - 1].get_phone_number() << std::endl
				<< "Darkest Secret:" << this->_con[index - 1].get_darkest_secret() << std::endl;
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
	this->_idx_count();
	this->_con[this->_idx].set_first_name(first_name);
	this->_con[this->_idx].set_last_name(last_name);
	this->_con[this->_idx].set_nick_name(nick_name);
	this->_con[this->_idx].set_phone_number(phone_number);
	this->_con[this->_idx].set_darkest_secret(darkest_secret);
}
