#include "stdafx.h"
#include "Subject.h"
#include <iostream>

Observer* Subject::observer;

Subject::Subject()
{
	
}


Subject::~Subject()
{
}

void Subject::RegisterObserver(Observer* parObserver)
{
	std::cout << "register"<< std::endl;
	observer = parObserver;
}

void Subject::UnregisterObserver(Observer* parObserver)
{
	observer = nullptr;
}

void Subject::NotifyObservers()
{
	observer->Notify();
}
