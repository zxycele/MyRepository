#pragma once
/************************************************************************/
/* 
				主题类   接口
                                                                     */
/************************************************************************/
#include "Observer.h"
#include <vector>
#include <iostream>
using namespace std;
class CObserver;
class CSubject
{
public:
	
	virtual void AddObserver(CObserver *mSever)=0;
	  virtual void RemoveObserver(CObserver *mSever)=0;
	  virtual void NotifyObserver()=0; 
	CSubject(void);
	virtual ~CSubject(void)
	{
		cout<<"in the destructor of Account"<<endl;  
	}
};

