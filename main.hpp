/***************************************************
 * Code your program here
 ***************************************************/
#include "main.cpp"
using namespace std;
int writeFile() {
    ofstream file("employee.txt");
    if (!file.is_open()) {
        cerr << "Error: Unable to open file employee.txt" << endl;
        return 0;
    }
}

