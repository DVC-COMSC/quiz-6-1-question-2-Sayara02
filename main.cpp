#include "main.hpp"
#include <string>
#include <iostream>
#include <string>
int writeFile() {
    std::ofstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error: Unable to open file employee.txt" << filename << std::endl;
        return 0;
    }
    int numEmployees;
    std::cout << "Enter the number of employees: ";
    std::cin >> numEmployees;
    for(int i = 0; i < numEmployees; ++i) {
        int id;
        std::string name, department;
        double salary;
        std::cout << "Enter details for employee #" << i+1 << ":" << endl;
        std::cout << "ID: ";
        std::cin >> id;
        std::cout << "Name: ";
        std::cin >> name;
        std::cout << department;
        std::cin >> department;
        std::cout << "Salary: ";
        std::cin >> salary;
        file << id << " " << name << " " << department << " " << salary << endl;

        }
        file.close();
        return numEmployees;
}
int readFile() {
    istd::fstream file("employee.txt");
    if (!file.is_open()) {
        std::cerr << "Error: Unable to open file employee.txt" << endl;
        return 0;
    }
    int numEmployees = 0;
    std::string line;
    while (getline(file, line)) {
        std::cout << line std::endl;
        numEmployees++;
    }
    file.close();
    return numEmployees;

}

int main()
{

    string filename;
    int empN;

    filename = "employee.txt";
    empN = writeFile(filename);
    cout << "File created with " << empN << " employee records\n";

    empN = readFile(filename);
    cout << "The total number of employess read " << empN << endl;
}