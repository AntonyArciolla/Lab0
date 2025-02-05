#include "Employee.h"
std::ostream& operator<<(std::ostream& os, const Employee& person)
{
	os << "Name: " << person.getName() << std::endl << "Email: " << person.getEmail()
		<< std::endl << "Location: " << person.getLocation() << std::endl;
	return os;
}


Employee::Employee(std::string n, std::string e)
{
	name = n;
	email = e;
	location = "nonProvided";
}

std::string Employee::setLocation(std::string newlocation)
{
	location = newlocation;
	return location;
}

void Employee::learnSkill(std::string skillName)
{
	for (int i=0; i < MAX_SIZE; ++i) {
		array[i].skill_name = skillName;
	}
}

void Employee::showSkill()
{
	std::string temp;
	for (int i = 0; i < MAX_SIZE; ++i) {
		for (int j = i + 1; j < MAX_SIZE; ++i) {
			if (array[i].skill_name > array[j].skill_name) {
				temp = array[i].skill_name;
				array[i].skill_name = array[j].skill_name;
				array[j].skill_name = temp;
			}
		}
		if (array[i].skill_name == "C++") {
			array[i].skill_level = 3;
		}
		if (array[i].skill_name == "Java") {
			array[i].skill_level = 2;
		}
		else {
			array[i].skill_level = 1;
		}
		std::cout << "Skill Name: " << array[i].skill_name << std::endl 
		<< "Skill Level: " << array[i].skill_level << std::endl;
	}
	
}

void Employee::clearSkill(std::string removedSkill)
{
	for (int i = 0; i < MAX_SIZE; ++i) {
		if (array[i].skill_name == removedSkill) {
			array[i].skill_name == "";
			array[i].skill_level = 0;
		}
	}
}

int Employee::calculateSalary()
{
	int salary=0;

	for (int i = 0; i < MAX_SIZE; ++i) {
			salary += array[i].skill_level * 50;
	}
	return salary;
}

