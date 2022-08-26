   // *****************************************************************************//
  //                                                                              //
 //                Account.hpp for GlobalBanksters United                      //
//////            Created on  : Sun Aug 14 14:04:15 2069                      ////////
   //                Last update : Sun Aug 14 18:35:06 2069                          //
  //                Made by : Huy "Flash" Duong <qduong@students.42wolfsburg.de    //
 //                                                                              //
// ****************************************************************************//

#include "Account.hpp"
#include <iostream>
#include <string>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

//"default" constructor
Account::Account(){
	Account::_nbAccounts += 1;
}
//overloading "default" constructor
Account::Account(int initial_deposit):_accountIndex(Account::_nbAccounts),
									 _amount(initial_deposit), 
									  _nbDeposits(0), 
									  _nbWithdrawals(0) 
									  {
	Account::_nbAccounts += 1;
	Account::_totalAmount += this->_amount;
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
			  <<";amount:" << this->_amount;
	std::cout << ";created" << std::endl;
	return ;
}

// no operator << matches these operands -> #include <string>!
Account::~Account(){
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
			  << ";amount:" << this->checkAmount();
	std::cout << ";closed" << std::endl;
}

/**
 * cpp d00 11 non member attributes
 * this pointer not passed
 * static makes non member function
 * @return int notal nb Accounts
 */
int Account::getNbAccounts(){
	return (Account::_nbAccounts);
}

int Account::getTotalAmount(){
	return (Account::_totalAmount);
}
int Account::getNbDeposits(){
	return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(){
	return (Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos(){
	Account::_displayTimestamp();
	std::cout << " accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount()
			  << ";deposits:" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void Account::makeDeposit(int deposit){
	this->Account::_totalNbDeposits += 1;
	this->_nbDeposits += 1;
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->checkAmount()
			  << ";deposit:" << deposit;
	this->_amount += deposit;
	this->_totalAmount += deposit;
	std::cout << ";amount:" << this->checkAmount() << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal){
	if (this->checkAmount() < withdrawal)
	{
		Account::_displayTimestamp();
		std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->checkAmount();
		std::cout << ";withdrawal:refused" << std::endl;
		return (0);
	}
	else
	{
		Account::_displayTimestamp();
		std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->checkAmount();
		std::cout << ";withdrawal:" << withdrawal;
		this->_amount -= withdrawal;
		this->_totalAmount -= withdrawal;
		this->_nbWithdrawals += 1;
		this->Account::_totalNbWithdrawals += 1;
		std::cout << ";amount:" << this->checkAmount() << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (1);
	}
}

int Account::checkAmount()const{
	return (this->_amount);
}

void Account::displayStatus()const{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->checkAmount()
			  << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
	return ;
}

//timestamp wrong format -> should be redefined
void Account::_displayTimestamp(){
	std::cout << "[" << time(NULL) << "]";
}
