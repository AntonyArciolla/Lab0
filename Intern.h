/***************************************************************************
* File: Intern.h
* Author: Antony Arciolla
* Class: CST 202
* Description:
*   This file defines the Intern class, which inherits from the Employee class.
*   It introduces an additional attribute for the intern's college and provides
*   methods for modifying and retrieving the college name.
***************************************************************************/



#pragma once
#include "Employee.h"
class Intern :  public Employee
{
private:
    std::string college;
public:
    Intern(std::string n, std::string e);
    void setCollege(std::string newCollege);
    std::string getCollege() const { return college; }
    friend std::ostream& operator<<(std::ostream& os, const Intern& person);
};