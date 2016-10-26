///////////////////////////////////////////////////////////
//  DecoratorPhoneA.h
//  Implementation of the Class DecoratorPhoneA
//  Created on:      28-ÁùÔÂ-2016 17:09:47
//  Original author: zxy
///////////////////////////////////////////////////////////

#if !defined(EA_B39EC0F4_B0F0_4c6f_A087_125C89A40833__INCLUDED_)
#define EA_B39EC0F4_B0F0_4c6f_A087_125C89A40833__INCLUDED_

#include "DecoratorPhone.h"

class DecoratorPhoneA : public DecoratorPhone
{

public:
	DecoratorPhoneA(Phone *phone);
	virtual ~DecoratorPhoneA();

	void ShowDecorate();

private:
	void AddDecorate();

};
#endif // !defined(EA_B39EC0F4_B0F0_4c6f_A087_125C89A40833__INCLUDED_)
