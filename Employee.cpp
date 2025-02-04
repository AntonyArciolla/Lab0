#include "Employee.h"

Employee::Employee(std::string name, std::string email, std::string location = "non provided")
{

}

std::ostream& operator<<(std::ostream& os, const Employee& person)
{
	os << "Name: " << person.getName() << std::endl << "Email: " << person.getEmail() 
		<< std::endl << "Location: " << person.getLocation() << std::endl;
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
	}
	
}

void Employee::clearskill(std::string removedSkill)
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
	int salary;
	for (int i = 0; i < MAX_SIZE; ++i) {
		if (array[i].skill_level = 3) {
			salary = 150;
		}
		if (array[i].skill_level = 3) {
			salary = 150;
		}
	}
	return salary;
}

