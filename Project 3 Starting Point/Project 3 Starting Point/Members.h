#pragma once
#include<string>


class Members
{
private:
	std::string _name;
public:
	Members(std::string name);
	~Members();

	std::string GetName() const { return _name; }
	std::string virtual Attack() { return _name + " Punches with vicious fury!"; }
};
