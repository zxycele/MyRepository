#pragma once
#include "observer.h"
#include "ConcrereSubject.h"
#include <string>
class CConcreteObserver :
	public CObserver
{
public:
	CConcreteObserver(void);
	CConcreteObserver::CConcreteObserver(CConcrereSubject *msubject ,string name);
	~CConcreteObserver(void);
	void update();
private:
	string name;
	string observerState;
	CConcrereSubject *mConcreteSubject;
};

