
//QN 2
/*Write a program that has a class with a dynamically allocated character array as its data member.
One object should contain "Engineers are" and another should contain " Creatures of logic".
Member function join() should concatenate two strings by passing two objects as arguments.
Display the concatenated string through a member function. Use constructors to allocate and
 initialize the data member. Also, write a destructor to free the allocated memory for the
 character array. Make your own function for the concatenation of two strings.*/

#include <iostream>

class Array
{
private:
  char *array=new char[20];
public:
   Array(char x[],int n){
       for(int i=0;i<n;i++){
        array[i]=x[i];
        std::cout<<array[i];
       }
   }

   void display(int n){
       for(int i=0;i<n;i++){
        std::cout<<array[i];
       }
   }
   ~Array(){
       delete [] array;
       std::cout<<"yamete";

     }

};
int main()
{
    char one[] = {'E', 'n', 'g', 'i', 'n', 'e', 'e', 'r', 's', ' ', 'a', 'r', 'e'};
    char two[] = {' ', 'C', 'r', 'e', 'a', 't', 'u', 'r', 'e', 's', ' ', 'o', 'f', ' ', 'l', 'o', 'g', 'i', 'c'};
    Array a(one,13);
    Array b(two,19);
    a.display(13);
    b.display(19);
return 0;
}
