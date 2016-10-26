///////////////////////////////////////////////////////////
//  iPhone.h
//  Implementation of the Class iPhone
//  Created on:      28-ÁùÔÂ-2016 17:09:47
//  Original author: zxy
///////////////////////////////////////////////////////////

#if !defined(EA_5116D362_7633_4895_8990_1D24F413AB7C__INCLUDED_)
#define EA_5116D362_7633_4895_8990_1D24F413AB7C__INCLUDED_

#include "Phone.h"
#include <string>
using namespace std;
class iPhone : public Phone
{

public:
	iPhone(string name);
	virtual ~iPhone();

	void ShowDecorate();

private:
	string m_name;

};
#endif // !defined(EA_5116D362_7633_4895_8990_1D24F413AB7C__INCLUDED_)
