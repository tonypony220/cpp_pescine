#ifndef __ZOMBIE_H__
# define __ZOMBIE_H__

# include <iostream>
# include <iomanip>
# include <unistd.h>

class Zombie 
{
  private:
	std::string _name;

  public:
	Zombie( std::string name );	
	~Zombie( void );	
	void announce( void ) const;
};

Zombie* newZombie( std::string name );	
void randomChump( std::string name );

#endif
