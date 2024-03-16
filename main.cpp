#include "main.hpp"

#include <iostream>
#include <fstream>
#include <string>

int main()
{

    std::string filename = 
    int empN;

    filename = "employee.txt";
    empN = writeFile(filename);
    std::cout << "File created with " << empN << " employee records\n" << std::endl;

    empN = readFile(filename);
    std::cout << "The total number of employess read " << empN << std::endl;
    return 0;

}