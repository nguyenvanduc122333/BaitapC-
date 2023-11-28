#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int idNumber;
    string department;
    string position;

public:
    // Constructors
    Employee(string name, int idNumber, string department, string position) {
        this->name = name;
        this->idNumber = idNumber;
        this->department = department;
        this->position = position;
    }

    Employee(string name, int idNumber) {
        this->name = name;
        this->idNumber = idNumber;
        this->department = "";
        this->position = "";
    }

    Employee() {
        this->name = "";
        this->idNumber = 0;
        this->department = "";
        this->position = "";
    }

    string getName() {
        return this->name;
    }

    int getIdNumber() {
        return this->idNumber;
    }

    string getDepartment() {
        return this->department;
    }

    string getPosition() {
        return this->position;
    }

    void setName(string name) {
        this->name = name;
    }

    void setIdNumber(int idNumber) {
        this->idNumber = idNumber;
    }

    void setDepartment(string department) {
        this->department = department;
    }

    void setPosition(string position) {
        this->position = position;
    }
};

int main() {
    Employee employee1("Susan Meyers", 47899, "Accounting", "Vice President");
    Employee employee2("Mark Jones", 39119, "IT", "Programmer");
    Employee employee3("Joy Rogers", 81774, "Manufacturing", "Engineer");
	cout<<"-------------------------------------------------------------------------------"<<endl;
	cout<<"Name\t"<<"\tID Number\t"<<"Department \t"<<"Position"<<endl;
    cout <<  employee1.getName() << "\t"<< employee1.getIdNumber() << "\t\t"<< employee1.getDepartment() << "\t\t"<< employee1.getPosition()<<endl;
       cout << employee2.getName() << "\t"<< employee2.getIdNumber() << "\t\t"<< employee2.getDepartment() << "\t\t"<< employee2.getPosition()<<endl;
    cout << employee3.getName() << "\t"<< employee3.getIdNumber() << "\t\t"<< employee3.getDepartment() << "\t\t"<< employee3.getPosition()<<endl;
	cout<<"--------------------------------------------------------------------------------"<<endl;

    return 0;
}

