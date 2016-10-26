
#include "ConcrereSubject.h"


CConcrereSubject::CConcrereSubject(void)
{
}
void  CConcrereSubject::AddObserver(CObserver *mSever)
{
	observerList.push_back(mSever);
}
void CConcrereSubject::RemoveObserver(CObserver *mSever)
{
	for (vector<CObserver*>::iterator it=observerList.begin();it!=observerList.end();)
	{
		if ((*it)==mSever)
		{
			it=observerList.erase(it);
		}
		else
		{
			++it;
		}
	}

}
void CConcrereSubject::NotifyObserver()
{

	for (vector<CObserver*>::iterator it=observerList.begin();it!=observerList.end();it++)
	{
		(*it)->update();
	}

}

CConcrereSubject::~CConcrereSubject(void)
{
}
