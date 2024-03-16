/***************************************************
 * Code your program here
 ***************************************************/
#include "main.cpp"
#include <fstream>

using namespace std;
int writeFile() {
    ofstream file("employee.txt");
    if (!file.is_open()) {
        cerr << "Error: Unable to open file employee.txt" << endl;
        return 0;
    }
    int numEmployees;
    cout << "Enter the number of employees: ";
    cin >> numEmployees;
    for(int i = 0; i < numEmployees; ++i) {
        int id;
        string name, department;
        double salary;
        cout << "Enter details for employee #" << i+1 << ":" << endl;
        cout << "ID: ";
        cin >> id;
        cout << "Name: ";
        cin >> name:
        cout << department;
        cin >> department;
        cout << "Salary: ";
        cin >> salary;
        file << id << " " << name << " " << department << " " << salary << endl;

        }
        file.close();
        return numEmployees;
}

