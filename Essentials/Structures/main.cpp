#include <iostream>
#include <string>

#define MAX_NAME_LENGTH 25

// structure of Employee havaing variables id, name, and salary
struct Employee
{
    int employeeID;
    char employeeName[MAX_NAME_LENGTH];
    float employeeSalary;
};

Employee input()
{
    std::string name;
    Employee e;
    std::cout << "Enter Employee ID: ";
    std::cin >> e.employeeID;
    std::cout << "Enter Employee Name: ";
    // std::cin.getline(e.employeeName, MAX_NAME_LENGTH);
    std::getline(std::cin, name);
    e.employeeName = name;
    std::cout << "Enter Employee Salary: ";
    std::cin >> e.employeeSalary;

    return e;
}

void printDetails(Employee e){
    std::cout << "Employee ID = " << e.employeeID << std::endl << "Employee Name = " << e.employeeName << std::endl << "Employee Salary = " << e.employeeSalary;
}

int main(int argc, char const *argv[])
{
    /* code */
    Employee e1;
    e1 = {1001, "Jatin Munjal", 95000.00};
    Employee e2;
    e2 = input();
    printDetails(e2);
    return 0;
}
