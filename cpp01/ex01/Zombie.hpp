#ifndef __ZOMBIE_H__
# define __ZOMBIE_H__

# include <iostream>
# include <iomanip>

class Zombie 
{
  private:
	std::string _name;

  public:
	Zombie();	
	Zombie( std::string name );	
	~Zombie( void );	
	void announce( void ) const;
	void set_name( std::string name ) { _name = name; } ;
};

Zombie* zombieHorde( int N, std::string name );

#endif
