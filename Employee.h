/***************************************************************************
* File: Employee.h
* Author: Antony Arciolla
* Class: CST 202
* Description:
*   This file defines the Employee class, which represents an employee with
*   attributes such as name, email, location, and a skill set. It provides
*   functionality for managing employee skills, modifying location, and
*   calculating salary.
***************************************************************************/



#pragma once
#include <string>
#include <iostream>
#include <iomanip>
const int MAX_SIZE = 5;
struct skill {
	std::string skill_name;
	int skill_level =0;
};
class Employee
{
private:
	std::string name;
	std::string email;
	std::string location;

	skill array[MAX_SIZE];
public:
	Employee(std::string n, std::string e);
	std::string setLocation(std::string newlocation);
	std::string getLocation() const { return location; };
	std::string getName() const { return name; };
	std::string getEmail() const { return email; };
	friend std::ostream& operator<<(std::ostream& os, const Employee& person );
	void learnSkill(std::string skillName);
	void showSkill();
	void clearSkill(std::string removedSkill);
	int calculateSalary();
};