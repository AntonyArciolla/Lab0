#pragma once
#include <string>
#include <iostream>
#include <iomanip>
const int MAX_SIZE = 5;
struct skill {
	std::string skill_name;
	int skill_level;
};
class Employee
{
private:
	std::string name;
	std::string email;
	std::string location;

	skill array[MAX_SIZE];
public:
	Employee(std::string name, std::string email, std::string location = "non provided");
	std::string set_location(std::string newlocation);
	std::string getLocation() const { return location; };
	std::string getName() const { return name; };
	std::string getEmail() const { return email; };
	friend std::ostream& operator<<(std::ostream& os, const Employee& person );
	void learnSkill(std::string skillName);
	void showSkill();
	void clearskill(std::string removedSkill);
	int calculateSalary();
};