/*
qn3.cpp

Create a class called carpark that has int data member for car id, int data member for charge/hour,
and float data member for the parked time.
Make functions to set data members and show the charges and parked hours of the corresponding car id.
Make functions for setting and showing the data members.
Member function should be called from other functions.
*/

#include <iostream>
class Carpark
{
private:
    //datamember
    int car_id;
    int charge_per_hour;
    float parked_time
    ;

public:
    //member functions
    void set_data_members ( int car, int charge , float parked)
    {
        car_id = car;
        charge_per_hour= charge;
        parked_time = parked;

        display_info();
    }

    void display_info ()
    {
        std::cout << "\n---------------For carid "<< car_id <<" ----------------\n";
        std::cout <<"Parked hour: "<<parked_time<<"\n";
        std::cout <<"Charge for parking: "<<charge_per_hour*parked_time<<"\n";
    }

};

int main()
{
    Carpark c;
    int CARID, CHARGE;
    float  PARKED;
    std::cout << "Enter car id: ";
    std::cin >> CARID;
    std::cout<< "Enter charge per hour: ";
    std::cin >> CHARGE;
    std::cout << "Enter parked time(hour): ";
    std::cin >> PARKED;
    c.set_data_members(CARID, CHARGE, PARKED);

    return 0;
}
