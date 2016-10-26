///////////////////////////////////////////////////////////
//  DecoratePhoneB.h
//  Implementation of the Class DecoratePhoneB
//  Created on:      28-ÁùÔÂ-2016 17:09:47
//  Original author: zxy
///////////////////////////////////////////////////////////

#if !defined(EA_37E8DBFF_A94D_4a09_B393_916738032863__INCLUDED_)
#define EA_37E8DBFF_A94D_4a09_B393_916738032863__INCLUDED_

#include "DecoratorPhone.h"

class DecoratePhoneB : public DecoratorPhone
{

public:
	DecoratePhoneB(Phone *phone);
	virtual ~DecoratePhoneB();

	void ShowDecorate();

private:
	void AddDecorate();

};
#endif // !defined(EA_37E8DBFF_A94D_4a09_B393_916738032863__INCLUDED_)
