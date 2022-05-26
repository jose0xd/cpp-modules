#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstdlib>

std::string	get_text(char *filename)
{
	std::ifstream		in_file;
	std::stringstream	buffer;

	in_file.open(filename);
	if (!in_file.is_open())
	{
		std::cout << "Unable to open " << filename << "\n";
		exit (-1);
	}
	buffer << in_file.rdbuf();
	in_file.close();
	return (buffer.str());
}

void	write_replace_file(std::string filename, std::string text,
		std::string s1, std::string s2)
{
	std::ofstream			out_file;
	std::string::size_type	n;
	std::string::size_type	start;

	out_file.open(filename + ".replace");
	if (!out_file.is_open())
	{
		std::cout << "Unable to create " << filename << ".replace\n";
		exit (-1);
	}
	start = 0;
	n = text.find(s1);
	while (n != std::string::npos)
	{
		out_file << text.substr(start, n - start);
		out_file << s2;
		start = n + s1.size();
		n = text.find(s1, start);
	}
	out_file << text.substr(start);
	out_file.close();
}

int main(int ac, char **av)
{
	std::string	text;

	if (ac != 4)
	{
		std::cout << "Usage: main <filename> <string 1> <string 2>\n";
		return (0);
	}
	text = get_text(av[1]);
	write_replace_file(av[1], text, av[2], av[3]);
}
