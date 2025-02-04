#include "Employee.h"

Employee::Employee(std::string name, std::string email, std::string location = "non provided")
{

}

std::ostream& operator<<(std::ostream& os, const Employee& person)
{
	os << "Name: " << person.getName() << std::endl << "Email: " << person.getEmail() 
		<< std::endl << "Location: " << person.getLocation() << std::endl;
}

void Employee::learnSkill(std::string& skills)
{
	for (int i=0; i < MAX_SIZE; ++i) {
		array[i].skill_name = skills;
	}
}

void Employee::showSkill(std::ostream& os)
{
}
