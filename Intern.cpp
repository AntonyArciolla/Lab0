/***************************************************************************
* File: Intern.cpp
* Author: Antony Arciolla
* Class: CST 202
* Description:
*   This file implements the Intern class, which is derived from the Employee class.
*   It defines the constructor, a setter for the college attribute, and an overloaded
*   stream insertion operator for displaying Intern details.
***************************************************************************/


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
