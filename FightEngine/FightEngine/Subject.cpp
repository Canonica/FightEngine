#include "stdafx.h"
#include "Subject.h"
#include <iostream>

std::vector<Observer> Subject::observers;

Subject::Subject()
{
	
}


Subject::~Subject()
{
}

void Subject::RegisterObserver(Observer parObserver)
{
}

void Subject::UnregisterObserver(Observer parObserver)
{
}

void Subject::NotifyObservers()
{
	for (std::vector<Observer>::iterator i = observers.begin(); i != observers.end(); ++i) { 
		i->Notify();
	}

}
