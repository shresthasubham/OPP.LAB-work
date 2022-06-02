// LAB 2 Q2//
/*Write a program using the function overloading that converts feet to inches.
use  function with no argument, one argument and two argument. Decide yourself the types
of arguments. Use pass by reference in any one function.
*/
#include<iostream>
float feetToInches(){
    std::cout<<"No argument taken to process\n";
    return 0;
}
float feetToInches(float feet){
    return feet*12;
}
float feetToInches(float &feet,float&inches){
    return feet*12 + inches;
}



int main(){
    float feet, inches;
    std::cout<<"Feet: ";
    std::cin>>feet;
    std::cout<<"inches: ";
    std::cin>>inches;
    feetToInches();
    std::cout<<"Single argument function: "<<feetToInches(feet) + inches<<"\n"
             <<"Double argument function: "<<feetToInches(feet,inches);
    return 0;
}
