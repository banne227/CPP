#include "Sed.hpp"

Sed::Sed(const std::string& filename): filename(filename) {}

Sed::~Sed() {}

void Sed::replace(const std::string& s1, const std::string& s2)
{
	if (s1.empty())
	{
		std::cout << "Error: s1 cannot be empty." << std::endl;
		return;
	}

	std::ifstream infile(this->filename.c_str());
	if (!infile.is_open())
	{
		std::cout << "Openning file error" << std::endl;
		return;
	}
	//fichier ouvert

	std::string content;
	std::string line;
	while (std::getline(infile,line))
		content += line + "\n";
	//rempli content avec getline 
	infile.close();

	std::ofstream outfile((this->filename + ".replace").c_str());
	if (!outfile.is_open())
	{
		std::cout << "Openning file error" << std::endl;
		return;
	}
	//ouvre le fichier pour remplacer

	std::size_t pos = 0;
	while ((pos = content.find(s1, pos)) != std::string::npos)
	{
		content.erase(pos, s1.length());
		content.insert(pos, s2);
		pos += s2.length();
	}
	//on cherche la premiere occurence de s1 dans content, la suprime et insert s2 a la meme pos
	
	outfile << content;
	//envoie le content bon dans outfile 
}
