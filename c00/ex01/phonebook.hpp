#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "contacts.hpp"
#include <iomanip>

class Phonebook{
	public:
	Contact	con[8];
	int		idx;
	int		ex;
	void	add(Phonebook *pb);
	void	search(Phonebook *pb);
	void	exit(Phonebook	*pb);
	
	Phonebook();
	~Phonebook();
};

#endif
