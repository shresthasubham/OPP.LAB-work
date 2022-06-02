// LAB 2 Q4//
/* Write a function that passes two temperatures by reference and
 sets the larger of the two numbers to a value entered by user by using return by reference.*/

 #include<iostream>
 int &larger(int &a, int &b){
     if(a>b)
         return a;
     else
        return b;
 }
 int main(){
 int ftemp, stemp,v;
 std::cout<<"Enter first temperature :";
 std::cin>>ftemp;
 std::cout<<"\nEnter second temperature :";
 std::cin>>stemp;
 std::cout<<"The value of first and second are : "<<ftemp<<"\n"
 << stemp;
 std::cout<<"\nEnter the value ;";
 std::cin>>v;
 larger(ftemp,stemp)=v;
 std::cout<<"After function process, the value are: \n";
 std::cout<<"temperature first: "<<ftemp;
 std::cout<<"\ntemperature second: "<<stemp;
 return 0;

  }
