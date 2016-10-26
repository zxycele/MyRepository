///////////////////////////////////////////////////////////
//  NokiaPhone.cpp
//  Implementation of the Class NokiaPhone
//  Created on:      28-ÁùÔÂ-2016 17:09:48
//  Original author: zxy
///////////////////////////////////////////////////////////

#include "NokiaPhone.h"
#include <iostream>
using namespace std;

NokiaPhone::NokiaPhone(string name){
	this->m_name = name;
}



NokiaPhone::~NokiaPhone(){

}

void NokiaPhone::ShowDecorate(){
	cout<<m_name<<"µÄ×°ÊÎ"<<endl;
}