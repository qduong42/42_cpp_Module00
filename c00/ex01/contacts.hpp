#pragma once

# include <iostream>
class Contact{

	public:

		void set_first_name(std::string _first_name);
		void set_last_name(std::string _last_name);
		void set_nick_name(std::string _nick_name);
		void set_phone_number(std::string _phone_number);
		void set_darkest_secret(std::string _darkest_secret);
		std::string get_first_name();
		std::string get_last_name();
		std::string get_nick_name();
		std::string get_phone_number();
		std::string get_darkest_secret();
		Contact(void);
		~Contact(void);

	private:

 		std::string _first_name;
		std::string _last_name;
		std::string _nick_name;
		std::string _phone_number;
		std::string _darkest_secret;
};
