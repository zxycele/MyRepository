///////////////////////////////////////////////////////////
//  NokiaPhone.h
//  Implementation of the Class NokiaPhone
//  Created on:      28-ÁùÔÂ-2016 17:09:47
//  Original author: zxy
///////////////////////////////////////////////////////////

#if !defined(EA_8D06E5B1_B574_47d5_91AE_79F4A772C9DB__INCLUDED_)
#define EA_8D06E5B1_B574_47d5_91AE_79F4A772C9DB__INCLUDED_

#include "Phone.h"
#include <string>
using namespace std;
class NokiaPhone : public Phone
{

public:
	NokiaPhone(string name);
	virtual ~NokiaPhone();

	void ShowDecorate();

private:
	string m_name;

};
#endif // !defined(EA_8D06E5B1_B574_47d5_91AE_79F4A772C9DB__INCLUDED_)
