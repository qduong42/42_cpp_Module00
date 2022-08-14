#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contacts.hpp"
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <cstring>
# include <iostream>
# include <iomanip>
# include <string>

// ************************************************************************** //
//                               PhoneBook Class                              //
// ************************************************************************** //

class PhoneBook{

	public:

		void	add();
		void	search();
		void	exit();
		int		get_exit();
		void add_contact(std::string first_name, 
						 std::string last_name,
						 std::string nick_name,
						 std::string phone_number,
						 std::string darkest_secret);
		PhoneBook();
		~PhoneBook();

	private:

		Contact	_con[8];
		int				_idx;
		size_t			_count;
		int				_ex;
		size_t const	_width;
		void			_idx_count(void);
		std::string		_add_prompt(std::string message);
		void			_std_prompt();
		void			_prompt_which();
		std::string		_truncate(std::string input);
		void			_show_contact(int index);
};

#endif