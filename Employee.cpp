/***************************************************************************
* File: Employee.cpp
* Author: Antony Arciolla
* Class: CST 202
* Description:
*   This file implements the Employee class, which represents an employee with
*   attributes such as name, email, location, and skills. It includes functionality
*   for modifying location, managing skills, and calculating salary.
***************************************************************************/


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
	for (int i = 0; i < MAX_SIZE; ++i) {
		if (array[i].skill_name == "") {
			array[i].skill_name = skillName;
			return;
		}
	}
	
}

void Employee::showSkill()
{
	std::string temp;
	for (int i = 0; i < MAX_SIZE; ++i) {
		if (array[i].skill_name != "") {
			for (int j = i + 1; j < MAX_SIZE; ++j) {
				if (array[i].skill_name > array[j].skill_name) {
					temp = array[i].skill_name;
					array[i].skill_name = array[j].skill_name;
					array[j].skill_name = temp;
				}
			}
			if (array[i].skill_name == "C++") {
				array[i].skill_level = 3;
			}
			else if (array[i].skill_name == "Java") {
				array[i].skill_level = 2;
			}
			else if (array[i].skill_name == "" ){
				array[i].skill_level = 0;
			}
			else {
				array[i].skill_level = 1;
			}
		}
	}
	for (int i = 0; i < MAX_SIZE; ++i) {
		while (array[i].skill_name == "") {
			++i;
		}
		std::cout << "Skill Name: " << array[i].skill_name << std::endl
			<< "Skill Level: " << array[i].skill_level << std::endl;
	}
}

void Employee::clearSkill(std::string removedSkill)
{
	for (int i = 0; i < MAX_SIZE; ++i) {
		if (array[i].skill_name == removedSkill) {
			array[i].skill_name = "";
			array[i].skill_level = 0;
			std::cout << "Removed Skill: " << removedSkill << std::endl;
			return;
		}
	}
}

int Employee::calculateSalary()
{
	int salary=0;

	for (int i = 0; i < MAX_SIZE; ++i) {
			salary += array[i].skill_level * 50;
	}
	std::cout << "Salary: " << salary << std::endl;
	return salary;
}

