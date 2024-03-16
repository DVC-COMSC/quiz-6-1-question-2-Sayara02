/***************************************************
 * Code your program here
 ***************************************************/

int writeFile(const std::string& filename) {
    std::ofstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error: Unable to open file " << filename << std::endl;
        return 0;
    }

    int numEmployees;
    std::cout << "Enter the number of employees: ";
    std::cin >> numEmployees;

    for (int i = 0; i < numEmployees; ++i) {
        int id;
        std::string name, department;
        double salary;

        std::cout << "Enter details for employee #" << i + 1 << ":" << std::endl;
        std::cout << "ID: ";
        std::cin >> id;
        std::cout << "Name: ";
        std::cin >> name;
        std::cout << "Department: "; // Fixed missing output
        std::cin >> department;
        std::cout << "Salary: ";
        std::cin >> salary;

        file << id << " " << name << " " << department << " " << salary << std::endl;
    }

    file.close();
    return numEmployees;
}

int readFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error: Unable to open file " << filename << std::endl;
        return 0;
    }

    int numEmployees = 0;
    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
        ++numEmployees;
    }

    file.close();
    return numEmployees;
}