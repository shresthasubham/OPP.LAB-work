/*
qn4.cpp

Write a program with classes to represent a circle, rectangle, and triangle. 
Each class should have data members to represent the actual objects and member functions 
to read and display objects, find perimeter and area of the objects, and 
other useful functions. Use the classes to create objects in your program.
*/

#include <iostream>
#include <cmath>

class Circle  
{
private:
    float radius{};

public:
    void read(float rad) {radius =rad;}
    void display(){
        std::cout<<"\n------------For Circle----------------\n";
        std::cout<<"area: "<<(3.14*radius*radius);
        std::cout<<"\nPerimeter: "<<(2*3.14*radius);
    }
};

class Rectangle
{
private:
    float length{};
    float breadth{};
public:
   void read(float l, float b) {length=l; breadth=b;}
    void display(){
        std::cout<<"\n------------For Rectangle----------------\n";
        std::cout<<"area: "<<(length*breadth);
        std::cout<<"\nPerimeter: "<<(2*(length+breadth));
    }
};

class Triangle
{
private:
    float a;
    float b;
    float c;

public:
    void read(float A, float B, float C) {a=A; b=B; c=C;}
    void display(){
        float s=(a+b+c)/2; 
        float AREA= sqrt(s*(s-a)*(s-b)*(s-c));
        std::cout<<"\n------------For circle----------------\n";
        std::cout<<"area: "<<AREA;
        std::cout<<"\nPerimeter: "<<2*s;
    }
};

int main()
{
    Circle ci;
    Rectangle r;
    Triangle t;

    int rad;
    //for cicle
    std::cout<<"\nFor Circle:\n";
    std::cout<<"radius: ";
    std::cin>>rad;
    ci.read(rad);
    ci.display();

    // for rectangle
    float length {}, breadth {};
    std::cout<<"\n\nFor Rectangle: \n";
    std::cout<<"length: ";
    std::cin >>length;
    std::cout<<"breadth: ";
    std::cin>>breadth;
    r.read(length,breadth);
    r.display();

    // for triangle
    float a{},b{},c{};
    std::cout << "\n\nFor triangle: \n";
    std::cout << "Enter three sides of triangle: ";
    std::cin>>a;
    std::cin>>b;
    std::cin>>c; 
    t.read(a,b,c);
    t.display();
    

    return 0;
}