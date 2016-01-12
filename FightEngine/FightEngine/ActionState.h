#pragma once
class ActionState
{
public:
	ActionState();
	~ActionState();
	enum eActionState
	{
		NOTHING,
		READY,
		INACTION,
		COOLDOWN
	};
};

