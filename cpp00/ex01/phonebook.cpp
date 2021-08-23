#include <iostream>
#include <iomanip>
#include <unistd.h>

#define BOOK_SIZE 8

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

void put_table_header(void) {
	std::cout << std::setiosflags (std::ios::showbase | std::ios::uppercase);
	std::cout << lllltd::setw(10) << "INDEX" << " | ";
	std::cout << std::setw(10) << "FIRST NAME" << " | ";
	std::cout << std::setw(10) << "LAST NAME" << " | ";
	std::cout << std::setw(10) << "NICKNAME" << std::endl;
	std::cout << std::resetiosflags (std::ios::showbase | std::ios::uppercase);
}

void Contact::display_full(void) {
	std::cout << idx << std::endl;
	std::cout << (first_name) << std::endl;
	std::cout << (last_name) << std::endl;
	std::cout << (phone_number) << std::endl;
	std::cout << (nickname) << std::endl;
}

class PhoneBook
{
	Contact contacts[BOOK_SIZE];

  public:

	int search() {
		int idx;
		put_table_header();
		for (int i = 0; i < BOOK_SIZE; i++) {
			if (contacts[i].exists())
				contacts[i].display();
		}
		std::cout << "PUT INDEX AS NUMBER: ";
		std::cin >> idx;
		if (std::cin && idx < BOOK_SIZE && idx >= 0 && contacts[idx].exists())
			contacts[idx].display_full();
		else
			std::cout << "ERROR VALUE\n";
		return 1;
	}
	int add(int i) {
		return contacts[i % BOOK_SIZE].setting(i % BOOK_SIZE);
	}
};

int Contact::setting(int i) {
	idx = i;
	std::cin && std::cout << "ENTER FIRST NAME: \n" && std::getline(std::cin, first_name);
	std::cin && std::cout << "ENTER LAST NAME: \n" && std::getline(std::cin, last_name);
	std::cin && std::cout << "ENTER NICK NAME: \n" && std::getline(std::cin, nickname);
	std::cin && std::cout << "ENTER PHONE NUMBER: \n" && std::getline(std::cin, phone_number);
	std::cin && std::cout << "ENTER DARKEST SECRET: \n" && std::getline(std::cin, darkest_secret);
	return std::cin && 1;
}

/* providing const	allows to put somthing like "AAA" or 2. */ 
/* and not only object */ 
std::string trim_str(std::string const & input) {
	if (input.size() > 10)
		return input.substr(0, 9).append(".");
	return input;
}

/* index, first name, last name and nickname. */
void Contact::display() {
	std::cout << std::setw(10);
	std::cout << std::setw(10) << idx << " | ";
	std::cout << std::setw(10) << trim_str(first_name) << " | ";
	std::cout << std::setw(10) << trim_str(last_name) << " | ";
	std::cout << std::setw(10) << trim_str(nickname) << std::endl;
}


int exiting(void) {
	exit(0);
	return (1);
}

int main()
{
	int i = 0;
	std::string cmd;
	PhoneBook phones;

	while (std::getline(std::cin, cmd)) {
		(!cmd.compare("ADD") || !cmd.compare("add")) && phones.add(i++);
		(!cmd.compare("SEARCH") || !cmd.compare("search")) && phones.search();
		(!cmd.compare("EXIT") || !cmd.compare("exit")) && exiting();
	}
	/* cmd = "sssssssssssssssssssssttttttttttt"; */

	/* std::cout << &cmd << std::endl; */
	/* std::cout << trim_str(cmd) << '\n'; */
	/* cmd.resize(5); */
	/* /1* std::cout << trim_str(cmd); *1/ */
	//std::cout << trim_str(cmd);
	/* sleep(100); */
}







