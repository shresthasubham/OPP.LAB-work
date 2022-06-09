/*
qn5.cpp

Assume that an object represents an employee report that contains information like employee id, total bonus, total overtime in a particular
year. Use an array of objects to represent n employees' reports. Write a program that displays the report. Use setpara() member function to
set report attributes by passing the arguments and member function displayreport() to show the report according to the parameter
passed. Display the report in the following format.

An employee with ... ... ... has received Rs ... ... ...as a bonus
and
had worked ... ... ... hours as overtime in the year ... ... ...
*/

#include <iostream>

class EmployeeReport
{
private:
    int employeeId;
    int tBonus;
    int tOvertime;
    int year;

public:
    void setdata(int employee,int bonus,int overtime,int y)
    {
        employeeId=employee;
        tBonus=bonus;
        tOvertime=overtime;
        year=y;

    }
    void displayReport(){
    std::cout<<"An employee with id  "<<employeeId<<" has received Rs "<<tBonus<<" as a bonus and had worked "<<tOvertime<< " hours as overtime in the year "<<year<<"\n";}

};


int main()
{   int n,y;
    std::cout<<"enter the year: ";
    std::cin>>y;
    std::cout<<"enter the no of employee: ";
    std::cin>>n;
    EmployeeReport e[n];
    for(int i=0;i<n;i++){
    std::cout<<"employee id: ";
    int employee;
    std::cin>>employee;

    int bonus;
    std::cout<<"bonus: ";
    std::cin>>bonus;

    int overtime;
    std::cout<<"overtime: ";
    std::cin>>overtime;

    e[i].setdata(employee,bonus,overtime,y);

    }
     for(int i=0;i<n;i++){
     e[i].displayReport();
     }

    return 0;
}
