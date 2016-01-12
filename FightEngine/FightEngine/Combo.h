#pragma once
#include "Action.h"
class Combo :
	public Action
{
public:
	Combo(Action* action1, Action* action2);
	~Combo();
	void Execute();
	enum COMBOS { HIGHPUNCH, LOWPUNCH, HIGHKICK, LOWKICK, BACKFLIPKICK, UPPERCUT, NUTDESTROYER };
	void checkInput(char input) override;

private :
	float damageMultiplicator;
	std::array<Action*, 2> arrayAction;
};

