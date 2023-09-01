
#include <iostream>
using namespace std;


struct stName
{
    string firstName;
    string lastName;
};
struct stAddress
{
    string city;
    string country;
};
struct stSalary
{
    float monthlySalary;
    float yearlySalary;
};
enum Gender {female='f', male='m'};
enum Status {single, married};

struct stInfo
{
    stName name;
    short int age;
    stAddress address;
    stSalary salary;
    Gender gender;
    Status status;
};

void readData(stInfo &person1)
{
    cout << "please enter your first name?\n";
    cin >> person1.name.firstName;
    cout << endl;

    cout << "please enter your last name?\n";
    cin >> person1.name.lastName;
    cout << endl;

    cout << "please enter your age?\n";
    cin >> person1.age;
    cout << endl;

    cout << "please enter your city?\n";
    cin >> person1.address.city;
    cout << endl;
    
    cout << "please enter your country?\n";
    cin >> person1.address.country;
    cout << endl;
    
    cout << "please enter your monthly salary?\n";
    cin >> person1.salary.monthlySalary;
    cout << endl;
    
    cout << "please enter your yearly salary?\n";
    cin >> person1.salary.yearlySalary;
    cout << endl;
}

void printInfo(stInfo& person1)
{
    cout << "***************************\n";
    cout << "First Name: " << person1.name.firstName << "\n";
    cout << "Last Name: " << person1.name.lastName << "\n";
    cout << "Age: " << person1.age << "\n";
    cout << "City: " << person1.address.city << "\n";
    cout << "Country: " << person1.address.country << "\n";
    cout << "Monthly Salary: " << person1.salary.monthlySalary << "\n";
    cout << "Yearly Salary: " << person1.salary.yearlySalary << "\n";
    cout << "Gender: " << person1.gender << "\n";
    cout << "married: " << person1.status << "\n";
    cout << "***************************\n";
}
int main()
{
    stInfo person1;
    person1.gender = Gender::male;
    person1.status = Status::married;

    readData(person1);
    printInfo(person1);

    return 0;
}

