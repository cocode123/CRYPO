#pragma once
#include <string>
#include <iostream>
class MD5
{
public:
	MD5();
	std::string startMD5(std::string source);
	std::string getMD5Code(std::string source);
	unsigned int* padding(std::string str);
	void MD5compress(unsigned int M[]);
	std::string changeToHex(int num);

	~MD5();
};

