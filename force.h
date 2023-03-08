#pragma once
#include <iostream>
class force
{
public:
	force();
	void startForce(const char* table,int len,char tmp[],char passwd[]);
	~force();
	int count;
	bool strcmp1(const char* s1,const char* s2);
	
};

