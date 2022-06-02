//LAB 2 Q5//
/*Assume that employee will have to pay 10 percent income tax to the government.\
Ask user to enter the employees salary.Use inline function to display the net payment
to the employee by the company.
*/

#include<iostream>
inline void display(int s){
    std::cout<<"Net salary: "<< (s-0.1*s);

}
int main(){
int salary;
std::cout<<"Salary: ";
std::cin>>salary;
display(salary);
return 0;
}
