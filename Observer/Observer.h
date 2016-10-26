/************************************************************************/
/* 
				观察者 接口
*/
/************************************************************************/
#pragma once

#include "Subject.h"
class CObserver
{
public:
	virtual void update(){};
	CObserver(void);
	virtual ~CObserver(void);
	
};

