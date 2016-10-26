#pragma once
#include "subject.h"
#include <vector>
#include <string>
class CConcrereSubject :
	public CSubject
{
public:
	CConcrereSubject(void);
	~CConcrereSubject(void);
	string concrereSubjectState ;
	 void AddObserver(CObserver *mSever);
	 void RemoveObserver(CObserver *mSever);
	 void NotifyObserver(); 
private:
	vector<CObserver*> observerList;

	
};

