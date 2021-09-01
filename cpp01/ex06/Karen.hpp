#ifndef __KAREN_H__
# define __KAREN_H__

#include <string>
#include <iostream>

enum LVL {
	NOTHING = -1,
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

class Karen {
	private: 
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
	public:
  		const static std::string levels[4]; 
		void complain( std::string level );	
		void set_level( std::string level );	
		LVL get_level_idx ( std::string level );
};

#endif
