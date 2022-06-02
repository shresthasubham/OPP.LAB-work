//LAB 2 q 1//
/*write a program  to set a structure to hold a date,
 assign values to the members of the structure and print out the values in the format 11/28/2004 by function.
  Pass the structure to function*/
#include<iostream>
struct date{
int month;
int day;
int year;
};
void printdate(date d)
{
    std::cout<< "Date : ";
    std::cout<<d.month<<"/"<<d.day<<"/"<<d.year<<std::endl;

};


int main(){
struct date ctDate;
std::cout<<"Year: ";
std::cin>>ctDate.year;
std::cout<<"Month: ";
std::cin>>ctDate.month;
std::cout<<"Day: ";
std::cin>>ctDate.day;
printdate(ctDate);
return 0;
}
