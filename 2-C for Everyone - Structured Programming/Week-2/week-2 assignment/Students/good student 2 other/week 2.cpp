#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// Define an enum for the departments
enum Department { HR, Sales, Research, Software, Executive };

// Define the struct for an employee
struct Employee {
    Department department;
    int salary;
    unsigned ssn;
};

// Function to generate a salary for a given department
int generateSalary(Department department) {
    int baseSalary;
    int offset;
    switch (department) {
        case HR:
            baseSalary = 50000;
            offset = rand() % 10000;
            break;
        case Sales:
            baseSalary = 60000;
            offset = rand() % 15000;
            break;
        case Research:
            baseSalary = 70000;
            offset = rand() % 20000;
            break;
        case Software:
            baseSalary = 80000;
            offset = rand() % 25000;
            break;
        case Executive:
            baseSalary = 100000;
            offset = rand() % 50000;
            break;
    }
    return baseSalary + offset;
}

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate 10 employees
    Employee employees[10];
    for (int i = 0; i < 10; i++) {
        employees[i].department = static_cast<Department>(rand() % 5);
        employees[i].salary = generateSalary(employees[i].department);
        employees[i].ssn = rand() % 1000000000;
    }

    // Print out the employees and their values
    for (int i = 0; i < 10; i++) {
        cout << "Employee " << i+1 << ": Department=";
        switch (employees[i].department) {
            case HR:
                cout << "HR";
                break;
            case Sales:
                cout << "Sales";
                break;
            case Research:
                cout << "Research";
                break;
            case Software:
                cout << "Software";
                break;
            case Executive:
                cout << "Executive";
                break;
        }
        cout << ", Salary=" << employees[i].salary << ", SSN=" << employees[i].ssn << endl;
    }

    return 0;
}
