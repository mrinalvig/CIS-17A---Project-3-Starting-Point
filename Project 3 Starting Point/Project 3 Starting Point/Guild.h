#pragma once
#include <string>
#include <vector>
#include <memory>
#include "Mage.h"
#include "Paladin.h"
#include "Ranger.h"
#include "Warrior.h"
#include "Members.h"

class Guild 
{
private:
	std::vector<std::shared_ptr<Members>> _members;
	
	std::string _name;
	int _gold = 0;
public:
	Guild(std::string name);
	~Guild();

	std::string GetName() const { return _name; }
	void AddMember(std::shared_ptr<Members> members);
	

	std::string GetInfo();
	std::string AttackWithAllAdventurers();
};

