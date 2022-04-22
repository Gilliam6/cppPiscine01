#ifndef SED_HPP
# define SED_HPP
# include <iostream>
# include <fstream>
int readFile(char *path, std::string *copy);
std::string convertation(std::string copy, char **argv);
void writeFile(std::string copy, char *path);

#endif