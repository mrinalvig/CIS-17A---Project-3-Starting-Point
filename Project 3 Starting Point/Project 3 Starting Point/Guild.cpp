#include "Guild.h"

Guild::Guild(std::string name) : _name(name)
{
}

Guild::~Guild()
{
}

void Guild::AddMember(std::shared_ptr<Members> members)
{
	_members.push_back(members);
}

std::string Guild::GetInfo()
{
	std::string output = "Your guild has: \n";	

	output += _members.size()		> 0 ? std::to_string(_members.size()) + " Members in your Guild!\n" : "No members in your Guild!\n";
	
	return output;
}

std::string Guild::AttackWithAllAdventurers()
{
	std::string result = "You command everyone to attack! \n";
	
	for (auto members : _members)
	{
		result += members->Attack();
	}
	return result;
}
