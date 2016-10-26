
#include "ConcreteObserver.h"
#include <iostream>

using namespace std;

CConcreteObserver::CConcreteObserver(void)
{
}
CConcreteObserver::CConcreteObserver(CConcrereSubject *msubject ,string name)
{
	this->mConcreteSubject = msubject;
	this->name = name;
}

void CConcreteObserver::update()
{
	observerState = mConcreteSubject->concrereSubjectState;
	cout<<name<<"  CConcreteObserver update state is "<<observerState<<std::endl;
}
CConcreteObserver::~CConcreteObserver(void)
{
}
