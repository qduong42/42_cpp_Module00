#ifndef CONTACTS_HPP
#define CONTACTS_HPP

# include <iostream>

// ************************************************************************** //
//                               Contact Class                                //
// ************************************************************************** //
class Contact{

	public:

		void setFirstName(std::string _firstName);
		void setLastName(std::string _lastName);
		void setNickName(std::string _nickName);
		void setPhoneNumber(std::string _phoneNumber);
		void setDarkestSecret(std::string _darkestSecret);
		std::string getFirstName()const;
		std::string getLastName()const;
		std::string getNickName()const;
		std::string getPhoneNumber()const;
		std::string getDarkestSecret()const;
		Contact(void);
		~Contact(void);

	private:

 		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;
};

#endif