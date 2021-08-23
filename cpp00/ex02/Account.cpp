#include "Account.hpp"
#include <iostream>
#include <iomanip>

/* definition of static members */
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


/* out: [19920104_091532] index:7;amount:16576;created */
Account::Account( int amount ) { //: _accountIndex(_nbAccounts), 
								 //  _amount(amount), 
								 //  _nbDeposits(0), 
								 //  _nbWithdrawals(0)  
	_accountIndex = _nbAccounts++;
	_amount = amount;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount += amount;
	_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "created" << std::endl; 
}

Account::~Account( void ) {
	_displayTimestamp();
	_nbAccounts--;
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
	std::cout << "closed" ;
	std::cout << std::endl;
}

void Account::displayStatus() const {
	_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
	std::cout << "deposites:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit ) {
	_totalNbDeposits++;	
	_nbDeposits++;
	_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    std::cout << "deposite:" << deposit << ";";
	_amount += deposit;
    std::cout << "amount:" << _amount << ";";
	std::cout << "nb_deposites:" << _nbDeposits << ";";
	std::cout << std::endl;
}

bool Account::makeWithdrawal( int withdrawal ) {
	_totalNbWithdrawals++;	
	_nbWithdrawals++;
	_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
	if (_amount < withdrawal) { 
		std::cout << "withdrawal:" << "refused" << std::endl;
		return false;
	}
	_amount -= withdrawal;
	std::cout << "withdrawal:" << withdrawal << ";";
    std::cout << "amount:" << _amount << ";";
	std::cout << "nb_withdrawals:" << _nbWithdrawals;
	std::cout << std::endl;
	return true;
}

int Account::checkAmount( void ) const {
	return ( _amount );
}

/* The characteristic of being static is independent of the visibility. */
/* The reasons that you will want to have a static method 
 * (some code that does not depend on non-static members) 
 * will still be useful. But maybe you don't want anyone/anything 
 * else to use it, just your class */
void	Account::_displayTimestamp( void ) {
   time_t now = time(0);
   struct tm * ltm = localtime(&now);
   char timestamp[30];

	strftime(timestamp, 30, "%Y%m%d_%H%M%S", ltm);
	std::cout << "[" << timestamp << "]";
}


int	Account::getNbAccounts( void ) {
	return ( _nbAccounts );
}

int	Account::getTotalAmount( void ) { 
	return ( _totalAmount );
}

int	Account::getNbDeposits( void ) {
	return ( _totalNbDeposits );
}

int	Account::getNbWithdrawals( void ) {
	return ( _totalNbWithdrawals );
}

/* [19920104_091532] accounts:8;total:21524;deposits:8;withdrawals:0 */
void	Account::displayAccountsInfos( void ) {
	_displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";";
    std::cout << "total:" << _totalAmount << ";";
    std::cout << "deposits:" << _totalNbDeposits << ";";
    std::cout << "withdrawals:" << _totalNbWithdrawals;
	std::cout << std::endl;
}
