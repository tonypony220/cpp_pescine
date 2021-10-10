#include <iostream>
#include <time.h>

#ifndef CLASS_BASE
# define CLASS_BASE

class Base {
  public:
	virtual ~Base( void );
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

struct Bases { int a; };
struct As { Bases a; int b; };

Base * generate( void );
void identify(Base* p);
void identify(Base& p);

void generate( Base& obj );
#endif

