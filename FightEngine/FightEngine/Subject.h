#pragma once
#include <vector>
#include "Observer.h"
class Subject
{
public:
	Subject();
	~Subject();
	void RegisterObserver(Observer parObserver);
	void UnregisterObserver(Observer parObserver);
	void NotifyObservers();


private :
	
		std::vector<Observer> observers;
};

