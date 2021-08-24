#ifndef __PHONEBOOK_H__
#define __PHONEBOOK_H__

#include <iostream>
#include <iomanip>
#include <unistd.h>

#define BOOK_SIZE 8
#define LOWER 0

class Contact 
{
	int idx;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

  public:
    int setting(int i);
   	void display();	 
	void display_full(void);
	int	exists() { 
		return (first_name.size() || 
				last_name.size() || 
				nickname.size() || 
				phone_number.size()); 
	}
};

#endif
