#include "Employee.h"

Employee::Employee(std::string name, std::string email)
{

}

std::ostream& operator<<(std::ostream& os, const Employee& person)
{
	os << "Name: " << person.getName() << std::endl << "Email: " << person.getEmail() 
		<< std::endl << "Location: " << person.getLocation() << std::endl;
}


