#pragma once
#include "Action.h"
#include <list>
class CurrentAction
	: public Action
{
public:
	CurrentAction();
	~CurrentAction();
	void Execute();
	void Add();
	void Remove();
	Action* GetChildren();
private:
	std::list<Action*> previousActions;
};

