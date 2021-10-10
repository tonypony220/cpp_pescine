#include "BaseABC.hpp"

Base::~Base( void ) {}

// replacement constructor 				 ---- here ----
void createA( Base& obj ) { obj.~Base(); new (&obj) A(); }
void createB( Base& obj ) { obj.~Base(); new (&obj) B(); }
void createC( Base& obj ) { obj.~Base(); new (&obj) C(); }

void generate( Base& obj ) {
	void ( *p[3] ) ( Base& ) = { &createA, &createB, &createC };
	(p[rand() % 3])(obj);
}

Base * createA( void ) { return new A(); }
Base * createB( void ) { return new B(); }
Base * createC( void ) { return new C(); }

Base * generate( void ) {
	Base * ( *p[3] ) ( void ) = { &createA, &createB, &createC };
	return (*p[rand() % 3])();
}

void identify(Base* p) {
	(dynamic_cast<A*>(p)) && (std::cout << "A" << std::endl);
	(dynamic_cast<B*>(p)) && (std::cout << "B" << std::endl);
	(dynamic_cast<C*>(p)) && (std::cout << "C" << std::endl);
}

/* to avoid using exceptions style */
void identify(Base& p) {
	identify(&p);
}
