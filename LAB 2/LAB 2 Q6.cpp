// LAB 2 Q6//
/*Write a program that display the current monthly salary  of CEO< IO and SI, programmar that has been increased
by 9,10,12 and 12 percent in year 2010.....Mention a function that takes two arguments,one salary and other increment.
use proper default argument;
*/
#include<iostream>
 void display( int s, int incr){
  std::cout<<s*(100+incr)/100<<std::endl;
  }
  int main(){
  int CEOSalary=18000;
  int IOSalary=25000;
  int SASalary=24000;
  int programmerSalary=18000;
  std::cout<<"programmerSalary: ";
  display(programmerSalary,12);
  std::cout<<"\nSASalary: ";
  display(SASalary,12);
  std::cout<<"\nIOSalary: ";
  display(IOSalary,10);
  std::cout<<"\nCEOSalary: ";
  display(CEOSalary,9);
  return 0;
  }
