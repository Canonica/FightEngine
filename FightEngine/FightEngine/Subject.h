#pragma once
#include <vector>
#include "Observer.h"
class Subject
{
public:
	Subject();
	~Subject();
	static void RegisterObserver(Observer* parObserver);
	static void UnregisterObserver(Observer* parObserver);
	static void NotifyObservers();


private :
	
		static std::vector<Observer*> observers;
};

