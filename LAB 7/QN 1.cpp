/*
Question_One.cpp

Write a program to create a class shape with functions to find the area of the shapes and display the names of the shapes and other essential components of the class.
Create derived classes circle, rectangle, and trapezoid each having overriding functions area() and display().
Write a suitable program to illustrate virtual functions and virtual destructors.
*/

#include <iostream>
#include <cmath>

class Shape
{
public:
    virtual ~Shape() { std::cout << "Destructor of Shape class.\n"; }

    virtual float area() { return 0; }
    virtual void display() {}
};

class Rectangle : public Shape
{
    float length;
    float breadth;

public:
    Rectangle(float l, float b) : Shape(), length(l), breadth(b) {}
    virtual ~Rectangle() { std::cout << "Destructor of Rectangle class.\n"; }

    float area()
    {
        return this->length * this->breadth;
    }
    void display()
    {
        std::cout << "This is rectangle\n";
    }
};
class Circle : public Shape
{
    float radius;

public:
    Circle(float r) : Shape(), radius(r){};
    virtual ~Circle() { std::cout << "Destructor of Circle class.\n"; };

    float area()
    {
        return this->radius * this->radius * M_PI;
    }
    void display()
    {
        std::cout << "This is circle\n";
    }
};
class Trapezoid : public Shape
{
    float parallel_side_one;
    float parallel_side_two;
    float distance_between_parallel_side;

public:
    Trapezoid(float psa, float psb, float dbps) : Shape(), parallel_side_one(psa), parallel_side_two(psb), distance_between_parallel_side(dbps){};
    virtual ~Trapezoid() { std::cout << "Destructor of Trapezoid class.\n"; };

    float area()
    {
        return 1.0 / 2 * this->distance_between_parallel_side * (this->parallel_side_one + this->parallel_side_two);
    }
    void display()
    {
        std::cout << "This is Trapezoid\n";
    }
};

int main()
{
    std::cout << Rectangle(3, 5).area() << "\n";
    std::cout << Circle(3).area() << "\n";
    std::cout << Trapezoid(6, 3, 1).area() << "\n";

    Circle *demo_circle = new Circle(10);
    Shape *demo_shape = demo_circle;
    delete demo_shape;

    return 0;
}
