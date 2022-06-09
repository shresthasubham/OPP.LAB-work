/*
 LAB 3 qn1.cpp

Write a simple program that converts the temperature in Celsius scale to
Fahrenheit scale and vice versa using the basic concept of class and object.
Make separate classes for Celsius and Fahrenheit which will have the private members that hold
the temperature value and make conversion functions in each class for conversion from one to another.
For example, you need to have a function toFahrenheit()
in class Celsius that converts to Fahrenheit scale and returns the value.
*/

#include <iostream>

class Celcius
{
private:
    float celcius;
public:
    float toFahrenheit()
    {
        return (9*(celcius/5)+32);
    }

     void set_celcius(int cel)
     {
        celcius = cel;
     }
};

class Fahrenheit
{
private:
    float fahrenheit;
public:
    float toCelcius(){
        return ((fahrenheit-32)*5/9);
    }

    void set_fahrenheit(int fah)
     {
        fahrenheit = fah;
     }

};

int main()
{
    Celcius c;
    Fahrenheit f;
    float cel, fah;
    std::cout << "\nEnter the temperature in celcius: ";
    std::cin >> cel;
    c.set_celcius(cel);

    std::cout<<"\nEnter the temperature in Fahrenheit: ";
    std::cin >> fah;
    f.set_fahrenheit(fah);

    std::cout<<"\n-----------------Displaying the conversion:----------------\n";
    std::cout<<"Equivalent of celcius "<< cel <<" to fahrenheit is: "<< c.toFahrenheit() <<"\n";
    std::cout<<"Equivalent of fahrenheit "<< fah <<" to celcius is: "<< f.toCelcius() <<"\n";

    return 0;

}
