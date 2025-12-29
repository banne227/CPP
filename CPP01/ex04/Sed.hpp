#ifndef SED_HPP
#define SED_HPP

#include <string>
#include <iostream>
#include <fstream>

class Sed
{
public:
	Sed(const std::string& filename);
	~Sed();
	void replace(const std::string& s1, const std::string& s2);

private:
	std::string filename;
};

#endif