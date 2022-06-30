//QN 4
/*
Question_Four.cpp

Write a class Date that overloads prefix and postfix operators to increase the Date object by one day,
while causing appropriate increments to the month and year (use the appropriate condition for leap year).
The prefix and postfix operators in the Date class should behave exactly like the built-in increment operators.
*/
#include<iostream>
class Date
{
private:
    int day, month ,year;
public:
    Date( int d,int m,int y):day(d),month(m),year(y){};
    void display()
    {
        std::cout<<day<<"/"<<month<<"/"<<year<<std::endl;
    }
     bool isLeapYear()
    {
        bool temp= false;
        (year%100==0)?

               ((year%400==0)?
                            (temp= true):
                ( temp= false)
               ):
                   ((year%4==0)?
                            (temp= true):
                ( temp= false)
                 );
                 return temp;
    }

    void operator++(){
        std::cout<<"PREFIX :";
        //for prefix
if(month%2!=0){
    day=day+1;
           if(day>31){
                increMonth();
              this->day=day-31;}
            else
              this->day=day;

        }
       else{
            if(month%2==0){
             if(month==2){
                if(isLeapYear()){
                     day=day+1;
                      if(day>29){
                       increMonth();
                        this->day=day-29;}
                     else{
                       this->day=day};
                }
                else{
                     if(day>28){
                       increMonth();
                        this->day=day-28;}
                     else{
                       this->day=day};

        }
        }}
        else{ if(day>30){
                       increMonth();
                        this->day=day-30;}
                     else{
                       this->day=day};}

       }
    }
}

    void operator++(int){
        std::cout<<"POSTFIX :";
        //for postfix  day=day+1;
        if(day>30){
            increMonth();
            this->day=day-30;}
        else
            this->day=day;

    }
    void increMonth(){
        month=month +1;
        if(month>12)
            {increYear();
            this->month=month-12;}
        else
            this->month=month;
    }
    void increYear(){
          this->year=year+1;}
};
int main(){
Date d1(29,2,2002);
std::cout<<"INPUT :";
 d1.display();
 std::cout<<d1.isLeapYear()<<std::endl;
 Date d2=d1;

 ++d2;
 d2.display();

 d2++;
 d2.display();
return 0;

}
