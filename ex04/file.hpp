#ifndef FILE_HPP
#define FILE_HPP

#include <iostream>
#include <fstream>
#include <string.h>

class file
{
private:
    std::string _file;
public:
    file(std::string file);
    ~file();
};

#endif