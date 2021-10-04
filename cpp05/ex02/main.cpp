#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>

int main() {
	Bureaucrat b("bob", 10);
	Bureaucrat v("jop", 147);
	ShrubberyCreationForm shrub("F8");
	RobotomyRequestForm robo("robocop form");
	PresidentialPardonForm pres("employee form");

	ShrubberyCreationForm f5(shrub);
	f5.setName("HOBA");

	std::cout << "COPY: " << shrub << std::endl;
	std::cout << "COPY: " << f5 << std::endl;

	v.signForm(shrub);
	v.signForm(robo);
	v.signForm(pres);

	b.executeForm(shrub);
	b.executeForm(robo);
	b.executeForm(pres);

	v.executeForm(shrub);
	v.executeForm(robo);
	v.executeForm(pres);

	b.signForm(shrub);
	b.signForm(robo);
	b.signForm(pres);


	b.executeForm(shrub);

	b.executeForm(robo);
	b.executeForm(robo);
	b.executeForm(robo);
	b.executeForm(robo);
	b.executeForm(robo);
	b.executeForm(robo);

	b.executeForm(pres);

	v.executeForm(shrub);
	v.executeForm(robo);
	v.executeForm(pres);

	
}
