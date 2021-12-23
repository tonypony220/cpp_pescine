#include <iostream>
/* #include "ichar.hpp" */
#include "IMateriaSource.hpp"
#pragma once

class MateriaSource : public IMateriaSource {
	private:
		AMateria * inventory[4];
	public:
		MateriaSource( void );
		virtual ~MateriaSource();
		virtual void learnMateria( AMateria* m );
		virtual AMateria* createMateria(std::string const & type);

		const MateriaSource & operator=( const MateriaSource & other );	
		MateriaSource( const MateriaSource & copy );	
};
