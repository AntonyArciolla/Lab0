#include "Intern.h"
Intern::Intern(std::string n, std::string e) : Employee(n, e)
{
	college = "SUNY Broome";
}
void Intern::setCollege(std::string newCollege)
{
	college = newCollege;
}
std::ostream& operator<<(std::ostream& os, const Intern& person)
{
	os << "Name: " << person.getName() << std::endl << "Email: " << person.getEmail()
		<< std::endl << "Location: " << person.getLocation() << std::endl << "College: "<< person.getCollege() << std::endl;
	return os;
}
