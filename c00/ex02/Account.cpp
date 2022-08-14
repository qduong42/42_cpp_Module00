// *****************************************************************************//
//                                                                               //
//                Account.hpp for GlobalBanksters United                          //
//                Created on  : Sun Aug 14 14:04:15 1989                           //
//                Last update : Sun Aug 14 14:04:06 1992                          //
//                Made by : Huy "Lightning" Duong <qduong@students.42wolfsburg.de//
//                                                                              //
// ****************************************************************************//

#include "Account.hpp"

static int _nbAccounts = 0;

Account::Account(){

}

Account::Account(int initial_deposit){
	this->_amount = initial_deposit;
	return ;
}

Account::~Account(){

}

int Account::getNbAccounts(){
	return (_nbAccounts);
}

int Account::getTotalAmount(){
	return (_totalAmount);
}

int Account::getNbDeposits(){
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(){
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(){
//prints <<timestamp<< " " << "accounts:" << account_num << ";total:" << total
		 //<<";deposits:" << deposit << ";withdrawals:" << withdrawals <<std::endl;
}

void Account::makeDeposit(int deposit){

}

bool Account::makeWithdrawal(int withdrawal){

}

int Account::checkAmount(){
return (this->getTotalAmount);
}

int Account::displayStatus(){

}

int Account::_displayTimestamp(){
	std::cout << std::time(nullptr);
}
