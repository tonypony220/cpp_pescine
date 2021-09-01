#include "Karen.hpp"


int exiting( std::string err ) {
	std::cout << err << std::endl;
	exit(1);
	return 1;
}

/* fall through made specially, mostly because of subject 
 * setting obj state would have made more sense */
int main ( int ac, char **argv ) {
	Karen k;
	ac == 2 || exiting( "error: args" );
	LVL lvl_idx = k.get_level_idx( argv[1] );		
	switch (lvl_idx) { 
		case DEBUG:
			k.complain( "DEBUG" );
		case INFO:
			k.complain( "INFO" );
		case WARNING:
			k.complain( "WARNING" );
		case ERROR:
			k.complain( "ERROR" );
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
