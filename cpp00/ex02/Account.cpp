#include "Account.hpp"
#include <ctime>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int inital_deposit){
	_nbAccounts += 1;
	_accountIndex = _nbAccounts - 1;
	_amount = inital_deposit;
	_totalAmount += inital_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account(){
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void Account::_displayTimestamp(){
	std::time_t currentTime = std::time(0);
	tm *ltm = localtime(&currentTime);
	std::cout << "[" << 1900 + ltm->tm_year << 1 + ltm->tm_mon
				<< ltm->tm_mday << "_" << 1 + ltm->tm_hour
				<< 1 + ltm->tm_min << 1 + ltm->tm_sec << "] ";
}
void Account::displayAccountsInfos(){
	_displayTimestamp();
	std::cout << "account:" << _nbAccounts << ";total" << _totalAmount
			<< ";deposits:" << _totalNbDeposits << ";withdrawals:"
			<< _totalNbWithdrawals << std::endl;
}

void Account::displayStatus() const{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:"
			<< _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit){
	_totalAmount += deposit;
	_amount += deposit;
	_totalNbDeposits += 1;
	_nbDeposits += 1;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount - deposit << ";deposit:"
			<< deposit << ";amount:" << _amount << "nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal){
	if (withdrawal <= _amount)
	{
		_totalAmount -= withdrawal;
		_amount -= withdrawal;
		_totalNbWithdrawals += 1;
		_nbWithdrawals += 1;
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount + withdrawal << ";withdrawal:"
			<< withdrawal << ";amount:" << _amount << "nb_withdrawals:" << _nbWithdrawals << std::endl;
		return(true);
	}
	else
	{
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:"
			<< "refused" << std::endl;
		return(false);
	}
}

int	Account::checkAmount() const{
	return this->_amount;
}

int	Account::getNbAccounts(){
	return _nbAccounts;
}

int	Account::getTotalAmount(){
	return _totalAmount;
}

int	Account::getNbDeposits(){
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals(){
	return _totalNbWithdrawals;
}