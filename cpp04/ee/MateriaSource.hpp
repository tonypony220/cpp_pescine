#include <iostream>
/* #include "ichar.hpp" */
#include "IMateriaSource.hpp"
#include <vector>
#pragma once

class MateriaSource : public IMateriaSource {
	private:
		std::vector<AMateria*> items;
	public:
		MateriaSource( void ) {} 

		~MateriaSource() {}

		MateriaSource( const MateriaSource & copy );	

		const MateriaSource & operator=( const MateriaSource & other );	

		void learnMateria( AMateria * m ) {
			items.push_back(m);
			std::cout << "items:"  << items.size()  << std::endl;
		}
		void deleteMateria( const std::string & name ) {
			std::vector<AMateria*>::iterator it;
			for (it = items.begin(); it != items.end(); it++) {
				std::cout << "searching.." <<(*it)->getType() << std::endl;
				if ((*it)->getType() == name) {
					items.erase(it);
					return deleteMateria( name );
				}
			}
			return ;
		}
		AMateria* createMateria(std::string const & name) {
			std::vector<AMateria*>::iterator it;
			for (it = items.begin(); it != items.end() ;++it) {
				std::cout << "searching.." <<(*it)->getType() << std::endl;
				if ((*it)->getType() == name)
					return (*it)->clone();
			}
			return 0;
		}
		

};
