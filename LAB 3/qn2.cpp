/*
qn2.cpp

Assume that you want to check whether the number is prime or not.
Write a program that asks for numbers repeatedly. When it finishes checking a number the program asks
if the user wants to do another calculation.
The response can be 'y' or 'n'. Don't forget to use the object-oriented concept.
*/

#include <iostream>
#include <string>

class Prime
{
private:
    //Data members;
    int prime;

public:
    void set_prime(int p) { prime = p;}
    bool prime_check()
    {
        bool flag = true;
        int f=0;


            for( int i=1 ; i<= prime ; i++)
            {
                if( prime%i == 0)
                { f++; }
            }




        if( f==2)
        { return flag ;}
        else { flag = false; return flag; }

    }

};

int main()
{
    Prime p;
    int PRIME{};

    std::string str;
    do
    {
        std::cout << "Enter number to check for prime: ";
        std::cin >> PRIME;
        p.set_prime(PRIME);

        if( p.prime_check())
        {
            std::cout << "\nThe entered number is prime ";
        }
        else
        {
            std::cout <<"\nThe entered number is not prime ";
        }

        std::cout<<"\nWant to repeat (y/n): ";
        std::cin>>str;

    }while( str != "n" );

    return 0;
}
