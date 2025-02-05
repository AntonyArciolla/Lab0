#pragma once
#ifndef INTERN_H
#define INTERN_H

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

#endif