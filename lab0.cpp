/***************************************************************************
* File: lab0.cpp
* Author: Antony Arciolla
* Class: CST 202
* Contains: Employee.h, Inter.h
* IPO:
*This program demonstrates the use of the Employee and Intern classes by
*Creating instances of Employee and Intern displaying initial object details.
*Modifying object properties such as location and college.
*Adding, displaying, removing skills and lastly, calculating salary.
****************************************************************************/
#include <iostream>
#include "Employee.h"
#include "Intern.h"

int main() {
	std::string n1 = "Erin";
	std::string n2 = "Rich";
	std::string e1 = "ew87@notreal.com";
	std::string e2 = "rijozwo@notreal.com";
	std::string c1 = "Loyola University";
	std::string l1 = "Endicott, NY";
	std::string l2 = "Binghamton, NY";
	
	Employee erin(n1, e1);
	Intern rich(n2, e2);

	std::cout << erin << std::endl;
	std::cout << rich << std::endl;

	erin.setLocation(l1);
	rich.setLocation(l2);

	rich.setCollege(c1);
	std::cout << rich << std::endl;

	rich.learnSkill("C++");
	rich.learnSkill("C++");
	rich.learnSkill("Java");

	rich.showSkill();
	rich.clearSkill("C++");
	rich.calculateSalary();
}