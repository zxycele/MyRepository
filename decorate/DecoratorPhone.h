///////////////////////////////////////////////////////////
//  DecoratorPhone.h
//  Implementation of the Class DecoratorPhone
//  Created on:      28-ÁùÔÂ-2016 17:09:47
//  Original author: zxy
///////////////////////////////////////////////////////////

#if !defined(EA_4C234879_4AF1_4ce2_B300_C5EA679EDDED__INCLUDED_)
#define EA_4C234879_4AF1_4ce2_B300_C5EA679EDDED__INCLUDED_

#include "Phone.h"

class DecoratorPhone : public Phone
{

public:
	DecoratorPhone(Phone *phone);
	virtual ~DecoratorPhone();
	

	virtual void ShowDecorate();

protected:
	Phone* m_phone;

};
#endif // !defined(EA_4C234879_4AF1_4ce2_B300_C5EA679EDDED__INCLUDED_)
