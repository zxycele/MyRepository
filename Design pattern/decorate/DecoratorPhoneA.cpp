///////////////////////////////////////////////////////////
//  DecoratorPhoneA.cpp
//  Implementation of the Class DecoratorPhoneA
//  Created on:      28-ÁùÔÂ-2016 17:09:47
//  Original author: zxy
///////////////////////////////////////////////////////////

#include "DecoratorPhoneA.h"

#include <iostream>
using namespace std;
DecoratorPhoneA::DecoratorPhoneA(Phone *phone):DecoratorPhone(phone){
	

}



DecoratorPhoneA::~DecoratorPhoneA(){

}





void DecoratorPhoneA::AddDecorate()
{
	cout<<"ÌùÄ¤"<<endl;
}


void DecoratorPhoneA::ShowDecorate()
{
	m_phone->ShowDecorate();
	//DecoratorPhone::ShowDecorate();
	this->AddDecorate();
}