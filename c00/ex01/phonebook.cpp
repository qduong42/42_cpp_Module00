#include "phonebook.hpp"

void	add(Phonebook *pb)
{
	std::cout << "Enter the contact's First Name:" << std::endl;
	std::in >> pb->con->first_name;
}