#include "Karen.hpp"

void Karen::debug( void ) {
	std::cout << "[ DEBUG ]\nI love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}
void Karen::info( void ) {
	std::cout << "[ INFO ]\ncannot believe adding extrabacon cost more money. You don’t put enough! If you did I would not have to askfor it!" << std::endl;
}
void Karen::warning( void ) {
	std::cout << "[ WARNING ]\nthink I deserve to have some extra bacon for free. I’ve beencoming here for years and you just started working here last month." << std::endl;
}
void Karen::error( void ) {
	std::cout << "[ ERROR ]\nThis is unacceptable, I want to speak to the manager now." << std::endl;
}

/* typedef void(Karen::*PTR) ( void ); */

void Karen::complain( std::string level ) {

  /* PTR pmf[4]= {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error}; */
  void ( Karen::*pmf[4] ) ( void ) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
  std::string strs[4] = {"debug", "info", "warning", "error"};

  for (int i = 0; i < 4; i++)
	if (!strs[i].compare(level))
		(this->*pmf[i])();	
}

